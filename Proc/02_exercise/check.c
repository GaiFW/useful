#include <stdio.h>
#include <unistd.h>


//无名管道
int main()
{
    int read_write[2];
    int mypipe = pipe(read_write);
    if(mypipe==-1)
    {
        perror("mypipe");
        return -1;
    }

    
    
    return 0;
}
