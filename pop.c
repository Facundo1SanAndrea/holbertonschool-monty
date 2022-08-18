#include "monty.h"
/**
 *pop - removes stack
 *@stack: stack
 *@line_number: line code
 *Return: 0
 */

void pop(stack_t **stack, unsigned int line_number)
{
	stack_t *head;

	if (!*stack)
	{
		fprintf(stderr, "L%u: can´t pop any empty stack\n", line_number);
		exit(EXIT_FAILURE);
	}
	head = (*stack)->next;
	(*stack)->prev = NULL;
	free(*stack);
	*stack = head;
}
