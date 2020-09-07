#include <stdio.h>

 int main(int argc, char const *argv[])
{
	/* code */
	FILE* fp=NULL;
	for (int i = 1; i < argc; ++i)
	{
		fp=fopen(argv[i],"r");
		if(fp!=NULL)
		{
			printf("%s 文件已经存在",argv[i]);
			fclose(fp);
			continue;
		}
		fp = fopen(argv[i],"w");
		fclose(fp);
	}
	return 0;
}