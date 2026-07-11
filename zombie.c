#include <stdio.h>
#include <unistd.h>
int main() {
    if (fork() == 0) {
        printf("Child finished\n");
    } else {
        sleep(10); // Parent not calling wait()
        printf("Parent exits after child became zombie\n");
    }
    return 0;
}

