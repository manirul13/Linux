#include <stdio.h>
#include <pthread.h>

void *thread(void *arg)
{
    printf("Hello from Thread\n");
    return NULL;
}

int main()
{
    pthread_t tid;

    pthread_create(&tid, NULL, thread, NULL);

    pthread_join(tid, NULL);

    return 0;
}
