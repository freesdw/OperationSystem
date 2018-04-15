#include <sys/types.h>
#include <stdio.h>
#include <unistd.h>

int main(void) {
	//create the first subprocess
	int pid1 = fork();
	if(pid1 > 0) {
		printf("**a**\n");
		//create the second subprocess
		int pid2 = fork();
		if(pid2 == 0) {
			printf("**c**\n");
		}
	} 
	else if(pid1 == 0) {
		printf("**b**\n");
	}
	return 0;
}
