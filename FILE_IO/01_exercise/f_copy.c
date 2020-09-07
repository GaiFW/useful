#include <stdio.h>
#include <string.h>
int main(int num,char const *arg[])
{
    FILE* fp=fopen(arg[1],"r");
    FILE* fp2 = fopen(arg[2],"w");

    char buf[100]="";
    while(fread(buf,10,10,fp)==10)
    {
        fwrite(buf,10,10,fp2);
        memset(buf,0,sizeof(buf));
    }
    long now=ftell(fp);
    int tmp=now%100;
    fseek(fp,-tmp,SEEK_CUR);
    if(tmp!=0)
    {
        int kuai=tmp / 10;
        int ge = tmp%10;
        fread(buf,10,kuai,fp);
        fwrite(buf,10,kuai,fp2);
        fread(buf,ge,1,fp);
        fwrite(buf,ge,1,fp2);
    }

    fclose(fp);
    fclose(fp2);
    return 0;
}

