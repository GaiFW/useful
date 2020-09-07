#include <stdio.h>
#include <errno.h>


int main(int num,const char* arr[])
{
    FILE* fp1 = fopen(arr[1],"r");
    FILE* fp2 = fopen(arr[2],"w");

    if(fp1==NULL)
    {
        perror(arr[1]);
        return 0;
    }
    char c=0;
    for(;c=fgetc(fp1),!feof(fp1);fputc(c,fp2));

    fclose(fp1);
    fclose(fp2);
    return 0;
}

