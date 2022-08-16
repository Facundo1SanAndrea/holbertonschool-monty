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

	/*line = malloc(line_max);*/
	if (line == NULL)
	{
		fprintf(stderr,"Error: malloc failed\n");
		exit(EXIT_FAILURE);
	}
	aux_argv = error_message(argc, argv);
	while (fgets(line, line_max, aux_argv) != NULL)
	{
		printf("%s", line);
	}
	fclose(aux_argv);
	return(0);
}
