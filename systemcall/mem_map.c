#include <stdio.h>
#include <sys/mman.h>
#include <unistd.h>

int main()
{
    int *ptr;

    ptr = mmap(NULL,
               sizeof(int),
               PROT_READ | PROT_WRITE,
               MAP_SHARED | MAP_ANONYMOUS,
               -1,
               0);

    *ptr = 100;

    printf("%d\n", *ptr);

    munmap(ptr, sizeof(int));

    return 0;
}
