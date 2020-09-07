#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <errno.h>
#include <unistd.h>
#include <string.h>
#include <strings.h>

void test1()
{
    int fp=open("file_copy.c",O_RDONLY);
    lseek(fp,100,SEEK_SET);
    char buf[100];
    memset(buf,0,sizeof(buf));

    read(fp,buf,10);
    printf("%s",buf);
    close(fp);
}


int main(int num,const char*arg[])
{
    char name1[32];
    char name2[32];
    strcpy(name1,arg[1]);
    strcpy(name2,arg[2]);
    int fp1 = open(name1,O_RDONLY,0777);
    int fp2 = open(name2,O_WRONLY|O_CREAT|O_TRUNC,0666);

    int fp3= dup2(fp1,2);
    printf("fp3:%d\n",fp3 );

    char buf[100]="0";
    int ret=10;
    while(ret = read(2,buf,sizeof(buf)) /*&& ret!=0?????*/)
    {
        write(fp2,buf,ret);

    }
    close(fp1);
    close(fp2);
    return 0;
}

