#include <stdio.h>
#include <stdlib.h>

int main(int argc, char* argv[], char* envp[]) 
{
	pid_t process = fork();

	if (process == 0)
	{
		printf("Ich bin der Kindprozess.\n");
		execv(argv[1], &argv[1]);
		exit(-1);
	}

	if (process > 0)	
	{
		printf("Elternprozess mit ID: %d\n", getpid());
		printf("Kindprozess hat ID: %d\n", process);
		wait(NULL);
	}
  	return 0;
}
