#include <stdio.h>
#include <sys/ipc.h>
#include <sys/msg.h>

struct msg {
    long type;
    char text[100];
};

int main() {
    int msgid = msgget(1234, 0666 | IPC_CREAT);

    struct msg m = {1, "Hello"};

    msgsnd(msgid, &m, sizeof(m.text), 0);
    msgrcv(msgid, &m, sizeof(m.text), 1, 0);

    printf("%s\n", m.text);
}