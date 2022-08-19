#include "monty.h"

/**
 * main - this fucntion is the principal
 *
 * @argc: is the number of arguments.
 * @argv: is the array of arguments.
 *
 * Return: 0 in sucess, or 1 on error.
 */


int main(int argc, char **argv)
{
	char *line = NULL, *token = NULL, *token_2 = NULL;
	unsigned int line_max = 1024, line_number = 1;
	FILE *aux_argv;
	stack_t *stack;
	int out = 0;

	line = malloc(line_max);
	if (line == NULL)
	{
		fprintf(stderr, "Error: malloc failed\n");
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
				token_2 = strtok(NULL, " \t\n");
				if (token_2)
					global_variable = token_2;
			}
		out = check_inst(token, line_number, &stack);
		}
		line_number++;
		/*global_variable = NULL;*/
	}
	fclose(aux_argv);
	while (stack->next)
	{
		stack = stack->next;
		free(stack);
	}
	free(line);
	if (!(strcmp(global_variable, "1")))
		exit(EXIT_FAILURE);
	else
		return (out);
}
