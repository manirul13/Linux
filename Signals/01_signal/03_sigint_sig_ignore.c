/*
1. Code to demonstrate signal handler.
2. SIG_IGN: To ignore the signal
*/

#include <stdio.h>
#include <signal.h>

//typedef void (*sighandler_t)(int);

void signal_handler(int);

int main()
{
	puts("Type: Ctrl + c");
	signal(SIGINT, SIG_IGN);
	while(1);
}

void signal_handler(int num)
{
	puts("You have pressed: Ctrl+c");
}

/*
Default behavior:
- Ctrl+C generates SIGINT, whose default action is to terminate the process.
- In this program, SIGINT is ignored using SIG_IGN, so Ctrl+C has no effect.
- Ctrl+Z generates SIGTSTP, which stops (suspends) the process unless handled or ignored.
*/