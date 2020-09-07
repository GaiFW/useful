#include <stdio.h>
#include<stdlib.h>
#include<unistd.h>
void a()
{
  double x,y,a;
    for(y = 1.5; y>-1.5; y-=0.1)
    {
        for(x=-1.5; x<1.5; x+=0.05)
        {
            a = x*x+y*y-1;
            printf (a*a*a-x*x*y*y*y <= 0.0? "\033[40;36m*\033[0m" : "\033[40;36m \033[0m");
        }
        putchar('\n');
    }
}
int main()
{
  long time;
  a();
  for (time=0;time<50;time++)
  {
    printf("\033[40;31mhello!Christmas Eve\n\033[0m");sleep(1);printf("\r");//sleep(0.5);s ms
    printf("\033[40;31mhello!Happy Christmas Eve!\n\033[0m");sleep(1);printf("\r");//sleep(0.5);s ms
    printf("\033[40;31mhello!Christmas Eve\n\033[0m");sleep(1);printf("\r");//sleep(0.5);s ms
    printf("\033[40;31mhello!Happy Christmas Eve!\n\033[0m");sleep(1);printf("\r");//sleep(0.5);s ms
    printf("\033[40;31mhello!Christmas Eve\n\033[0m");sleep(1);printf("\r");//sleep(0.5);s ms
    printf("\033[40;31mhello!Happy Christmas Eve!\n\033[0m");sleep(1);printf("\r");//sleep(0.5);s ms
    system("clear");//清屏 #include<stdlib.h>
    a();
  }
  return 0;
}