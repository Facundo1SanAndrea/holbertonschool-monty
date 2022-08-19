#include "monty.h"
/**
 *push - pushes int to stack
 *@stack: stack
 *@linea: line code
 *Return: 0
 */

void push(stack_t **stack, unsigned int linea)
{
	stack_t *aux = NULL;
	int i = 0;

	if (!global_variable)
	{
		fprintf(stderr, "L%d: usage: push integer\n", linea);
		global_variable = "1";
		return;
	}
	while (global_variable[i])
	{
		if (global_variable[i] == '-' || global_variable[i] == '+')
		{
			i++;
			continue;
		}
		else if (!(isdigit(global_variable[i])))
		{
			fprintf(stderr, "L%d: usage: push integer\n", linea);
			global_variable = "1";
			return;
		}
		i++;
	}
	aux = malloc(sizeof(stack_t));
	if (!aux)
		printf("%d usage: push integer.\n", linea);
	aux->prev = NULL;
	aux->n = atoi(global_variable);
	aux->next = *stack;
	global_variable = NULL;
	if (*stack)
		(*stack)->prev = aux;
	*stack = aux;
}
