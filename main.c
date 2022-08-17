#include "monty.h"

/**
 *
 *
 *
 */
char *global_variable;

int main(int argc, char **argv)
{
	char *line = NULL, *token = NULL, *token_2 = NULL; 
	unsigned int line_max = 1024, line_number = 1;
	FILE *aux_argv;
	stack_t *stack;

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
		if (token)
		{
			if (!(strcmp("push", token)))
			{
				printf("entro al if\n");
				token_2 = strtok(NULL, " \t\n");
				global_variable = token_2;
				printf("global %s\n", global_variable);/*arreglar funcon push*/
				push(&stack, line_number);
				printf("ejecuto push\n");
			}
			else
				check_inst(token, line, aux_argv, line_number);
		}
		line_number++;
	}
	fclose(aux_argv);
	free(line);
	return(0);
}
