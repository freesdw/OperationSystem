#include <sys/types.h>
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int value = 5;
int main() {
	pid_t pid;
	pid = fork();
	if(pid == 0) {/*child process*/
		value += 15;
	}
	else if(pid > 0) {
		wait();
		printf("PARENT:value = %d\n", value);/*LINE A*/
		exit(0);
	}
}
