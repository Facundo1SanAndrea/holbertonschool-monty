#include "monty.h"

char *global_variable;

void push(stack_t **stack, unsigned int linea)
{
	stack_t *aux = NULL;

	aux = malloc(sizeof(stack_t));
	if (!aux)
		printf("%d usage: push integer.\n", linea);

	aux->prev = NULL;
	aux->n = atoi(global_variable);
	aux->next = *stack;

	if (*stack)
		(*stack)->prev = aux;
	*stack = aux;
	free(aux);
}
