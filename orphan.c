#include <stdio.h>
#include <unistd.h>
int main()
{
    if (fork() == 0)
    {
        sleep(5);
        printf("I am orphan now, parent exited!\n");
    }
    else
    {
        printf("Parent exiting...\n");
    }
    return 0;
}
