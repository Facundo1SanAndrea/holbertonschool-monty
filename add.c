#include "monty.h"
/**
 *
 *
 *
 */
void add(stack_t **stack, unsigned int line_number)
{
	stack_t *head = *stack;
	stack_t *strlen = *stack;
	int element;

	for (element = 0; strlen != NULL; element++)
		strlen = strlen->next;

	if (element < 2)
	{
		fprintf(stderr, "L%d: can´t add, stack to short\n", line_number);
		free(*stack);
		exit(EXIT_FAILURE);
	}

	head = (*stack)->next;
	(*stack)->next->n += (*stack)->n;
/*	free(*stack);*/
/*	head->stack = NULL;*/
	(*stack) = head->next;
}
