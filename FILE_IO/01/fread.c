#include <stdio.h>
#include <errno.h>

int main()
{
	FILE* fp = NULL;
	fp = fopen("a.txt","w+");
	char buf[3]="he";
	
	int ret = fwrite(buf,4,2,fp);
	printf("%d\n",ret);
	fclose(fp);
	return 0;

}