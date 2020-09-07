#include <stdio.h>
int main()
{
    const int a=20;
    int *p=&a;
    *p=30;
    printf("%d",*p);
    return 0;

}

