#include <stdio.h>
#include <sys/ipc.h>
#include <sys/shm.h>

int main() {
    int shmid = shmget(1234, 1024, 0666 | IPC_CREAT);
    char *data = (char*) shmat(shmid, NULL, 0);

    sprintf(data, "Hello IPC");

    printf("Written: %s\n", data);

    shmdt(data);
}