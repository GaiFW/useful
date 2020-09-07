#include <stdio.h>
#include <errno.h>
int main(int num,char* arr[])
{
    FILE* fp = fopen(arr[1],"r");
    FILE* fp2 = fopen(arr[2],"w");

    if(fp==NULL)
    {
        perror(arr[1]);
        return 0;
    }
    char tmp[10240]="";

    while(fgets(tmp,sizeof(tmp)-1,fp)!=NULL)
    {
        fputs(tmp,fp2);
    }

    return 0;
}

