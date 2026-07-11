#include <stdio.h>
#include <unistd.h>

int main() {
    int fd[2];
    pipe(fd);

    if (fork() == 0) {
        // Child
        close(fd[0]); // close read
        write(fd[1], "Hello", 6);
    } else {
        // Parent
        char buf[10];
        close(fd[1]); // close write
        read(fd[0], buf, 6);
        printf("Received: %s\n", buf);
    }
}