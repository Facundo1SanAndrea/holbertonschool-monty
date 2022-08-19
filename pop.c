#include "monty.h"
/**
 *pop - removes stack
 *@stack: stack
 *@line_number: line code
 *Return: 0
 */

void pop(stack_t **stack, unsigned int line_number)
{
	stack_t *head = *stack;

	if (((*stack)->n))
	{
		(*stack) = head->next;
		head->next->prev = NULL;
		free(head);
	}
	else
	{
		fprintf(stderr, "L%u: can't pop any empty stack\n", line_number);
		global_variable = "1";
		return;
	}
}
