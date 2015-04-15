#include <stdio.h>

int main(int argc, char* argv[], char* envp[]) 
{
	if (argc > 1)
	{
		char* value = getenv(argv[1]);
		if (value != NULL)
		{
			printf("%s = %s\n", argv[1], value);
			return 0; 
		}
		else
			printf("%s ist nicht gesetzt.\n", argv[1]);
  	}
	else
		printf("Bitte eine Umgebungsvariable als Parameter angeben.\n");
  	return 1;
}
