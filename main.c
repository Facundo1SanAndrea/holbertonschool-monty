#include "monty.h"

/**
 *
 *
 *
 */

int main(int argc, char **argv)
{
	char *line; 
	int line_max = 1024;
	FILE *aux_argv;

	error_message(argc, argv);
	return(0);

	line = malloc(line_max + 1);
		if (line == NULL)
		{
			fprintf(stderr,"Error: malloc failed");
			exit(EXIT_FAILURE);
		}

	*aux_argv = error_message(argc, argv);
	while (fgets(line, line_max + 1, aux_argv) != NULL)
	{
		printf("%s", line);
	}

	free(line);
	return(0);
}
