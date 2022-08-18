#include "monty.h"

char *global_variable;

void push(stack_t **stack, unsigned int linea)
{
	stack_t *aux = NULL;

	if (isdigit(*global_variable))
	{
		aux = malloc(sizeof(stack_t));
		if (!aux)
			exit(EXIT_FAILURE);
		aux->prev = NULL;
		aux->n = atoi(global_variable);
	}
	else
	{
		fprintf(stderr,"L%d: usage: push integer\n", linea);
		exit(EXIT_FAILURE);
	}
		
	aux->next = *stack;

	if (*stack)
		(*stack)->prev = aux;
	*stack = aux;
}
