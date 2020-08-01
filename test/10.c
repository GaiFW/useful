#include<stdio.h>
#include<stdlib.h>

int main(int argc, char const *argv[])
{
	int num;
	printf("进入决赛的选手人数\n");
	scanf("%d", &num);

	float (*arr)[4] = (float (*)[4] )malloc(sizeof(int)*num*4);
	float a[num];

	for(int i=0; i<num; i++)
	{
		int m = 0;
		for(int j=0; j<4; j++)
		{

			scanf("%f", &arr[i][j]);
			m += arr[i][j];
			//printf("%d\n", arr[i][j]);

		}

		a[i] = m/4.0;
		//printf("%f\n", a[i]);
	}

	int max = a[0];
	int n = 0;
	for(int i=0; i<num; i++)
	{
		if(max < a[i])
		{
			max = a[i];
			n = i;
		}
		printf("%d号选手的成绩是%f\n", i, a[i]);
			
	}

	printf("最终冠军获得者是第%d位选手\n", n+1);
	free(arr);


	return 0;
}