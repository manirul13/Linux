#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>

int main()
{
    int fd;
    char buffer[100];

    fd = open("demo.txt", O_CREAT | O_RDWR | O_TRUNC, 0644);

    write(fd, "Hello Linux\n", 12);

    lseek(fd, 0, SEEK_SET);

    read(fd, buffer, 12);
    buffer[12] = '\0';

    printf("%s", buffer);

    close(fd);

    return 0;
}
