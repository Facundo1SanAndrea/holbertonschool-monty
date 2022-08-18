#include "monty.h"

char *global_variable;

void push(stack_t **stack, unsigned int linea)
{
	int i = 0;
	stack_t *aux = NULL;
	
	while (global_variable[i])
	{
		if (global_variable[i] == '-' || global_variable[i] == '+')
		{
			i++;
			continue;
		}
		else if (!(isdigit(global_variable[i])))
		{
			fprintf(stderr,"L%d: usage: push integer\n", linea);
			exit(EXIT_FAILURE);
		}
		i++;
	}
	aux = malloc(sizeof(stack_t));
	if (!aux)
		exit(EXIT_FAILURE);
	aux->prev = NULL;
	aux->n = atoi(global_variable);
	aux->next = *stack;

	if (*stack)
		(*stack)->prev = aux;
	*stack = aux;
}
