/*

opendir
DIR *opendir(const char *name);
DIR *fdopendir(int fd);

readdir
struct dirent *readdir(DIR *dirp);

closedir
	while(1)
	{
		dir_list = readdir(dp);
		if(dir_list==NULL)
		{
			break;
		}
		printf("%s\n",dir_list->d_name );
		strcpy(name,dir_list->d_name);
		if(strcmp(name+strlen(name)-4,".mp3")==0)
		{
			printf("%s\t",dir_list->d_name);
		}

	}

 */
#include <sys/types.h>
#include <dirent.h>
#include <stdio.h>
#include <string.h>

int main(int num,const char* arr[])
{
	DIR* dp = opendir(arr[1]);
	if(dp==NULL)
	{
		perror("opendir");
		return 0;
	}

	char name[256];
	for(struct dirent* dir_list = NULL; dir_list = readdir(dp),dir_list!=NULL; )
	{
		strcpy(name,dir_list->d_name);
		if(strcmp(name+strlen(name)-4,".mp3")==0)
		{
			printf("%s\t",dir_list->d_name);
		}

	}
	printf("\n");

	closedir(dp);
	return 0;
}

