#include <stdio.h>
#include <unistd.h>
int a = 3;
int main()
{
    if (fork() == 0)
    {
        a = 10;
        printf("Child a = %d\n", a);
    }
    else
    {
        sleep(1);
        printf("Parent a = %d\n", a);
    }
    return 0;
}
