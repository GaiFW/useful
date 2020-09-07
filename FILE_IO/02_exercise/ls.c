#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <pwd.h>
#include <time.h>
#include <unistd.h>
#include <string.h>
#include <errno.h>


int main(int argc, char const *argv[])
{
	if(argc<2)
	{
		fprintf(stdout,"./ls <youfile> ...\n" );
		return 0;
	}
	for (int i = 1; i < argc; ++i)
	{
		FILE* fp=fopen(argv[i],"r");
		if(fp==NULL)
		{
			perror(argv[i]);
			continue;
		}

		struct stat mystat;
		stat(argv[i],&mystat);

		/*文件类型*/
		char file_type='-';
		switch((mystat.st_mode>>12<<12) & S_IFMT)
		{
			case S_IFSOCK:
					file_type='s';
					break;
			case S_IFLNK:
					file_type='l';
					break;
			case S_IFREG:
					file_type='-';
					break;
			case S_IFBLK:
					file_type='b';
					break;
			case S_IFDIR:
					file_type='d';
					break;
			case S_IFCHR:
					file_type='c';
					break;
			case S_IFIFO:
					file_type='p';
					break;
		}

		/*所有者权限*/
		char owner_right_r='-';
		char owner_right_w='-';
		char owner_right_x='-';
		int tag=((mystat.st_mode>>6)&7);
		if(tag%2==1)
		{
			owner_right_r='r';
		}
		if((tag>>1)%2==1)
		{
			owner_right_w='w';
		}
		if((tag>>2)%2==1)
		{
			owner_right_x='x';
		}
		char owner_right[4]={owner_right_r,owner_right_w,owner_right_x};

		/*所属组成员权限*/
		char grp_right_r='-';
		char grp_right_w='-';
		char grp_right_x='-';
		tag = ((mystat.st_mode>>3)&7);
		if(tag%2==1)
		{
			grp_right_r='r';
		}
		if((tag>>1)%2==1)
		{
			grp_right_w='w';
		}
		if((tag>>2)%2==1)
		{
			grp_right_x='x';
		}
		char grp_right[4]={grp_right_r,grp_right_w,grp_right_x};

		/*其他人权限*/
		char oth_right_r='-';
		char oth_right_w='-';
		char oth_right_x='-';
		tag = mystat.st_mode&7;
		if(tag%2==1)
		{
			oth_right_r='r';
		}
		if((tag>>1)%2==1)
		{
			oth_right_w='w';
		}
		if((tag>>2)%2==1)
		{
			oth_right_x='x';
		}
		char oth_right[4]={oth_right_r,oth_right_w,oth_right_x};


		/*所有者name*/
		struct passwd *mypwd;
		mypwd = getpwuid(mystat.st_uid);
		char owner_name[16];
		strcpy(owner_name,mypwd->pw_name);
		/*所属组name*/
		mypwd = getpwuid(mystat.st_gid);
		char g_name[16];
		strcpy(g_name,mypwd->pw_name);

		/*文件大小*/
		long file_size=mystat.st_size;

		/*时间*/
		time_t t=mystat.st_mtime;
		struct tm* mytime;
		mytime = localtime(&t);
		char  change_time[64];
		sprintf(change_time,"%d月-%d日-%d:%d",(1+mytime->tm_mon),mytime->tm_mday,mytime->tm_hour,mytime->tm_min);

		/*组包*/
		fprintf(stdout, "%c%s%s%s\t%s\t%s\t%ld\t%s\t%s\n",file_type,owner_right,grp_right,\
										oth_right,g_name,owner_name,\
										file_size,change_time,argv[i] );
		fclose(fp);
	}
	return 0;
}