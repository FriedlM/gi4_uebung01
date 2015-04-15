#include <stdio.h>

int main(int argc, char* argv[], char* envp[]) 
{
	if (argc > 1)
	{
		int v = 0;
		char* value;

		if (argc > 2)
		{
			if (strcmp(argv[1], "-v") == 0)
				v++;
		}
		
		value = getenv(argv[1+v]);
		if (value != NULL)
		{
			if (v)
				printf("%s = %s\n", argv[1+v], value);
			return 0; 
		}
		else if (v)
			printf("%s ist nicht gesetzt.\n", argv[1+v]);
  	}
	else
		printf("Bitte eine Umgebungsvariable als Parameter angeben.\n");
  	return 1;
}
