#include<stdio.h>

void hanoi(int n, char from, char to, char temp)
{
	if(n == 1)
	{
		printf("%c -> %c\n", from, to);
		return;
	}
	hanoi(n-1, from, temp, to);//A B C
	printf("%c -> %c\n", from, to);//A C
	hanoi(n-1, temp, to, from);//B C A
}

int main()
{
	int n;
	char from = 'A', to = 'C', temp = 'B';
	scanf("%d", &n);
	hanoi(n, from, to, temp);
	return 0;
}