#include "monty.h"

/**
 *
 *
 *
 */

int main(int argc, char **argv)
{
	char *line = NULL, *token = NULL; 
	unsigned int line_max = 1024, line_number = 1;
	FILE *aux_argv;

	line = malloc(line_max);
	if (line == NULL)
	{
		fprintf(stderr,"Error: malloc failed\n");
		exit(EXIT_FAILURE);
	}
	aux_argv = error_message(argc, argv); /*busca archivo*/
	while (fgets(line, line_max, aux_argv))
	{
		token = strtok(line, " \t\n");
		while (token)
		{
			/*printf("%s\n", token);*/ /*tokeniza line*/
			check_instruction(token, line_number);
			token = strtok(NULL, " \t\n");
		}
		line_number++;
	}
	fclose(aux_argv);
	free(line);
	return(0);
}
