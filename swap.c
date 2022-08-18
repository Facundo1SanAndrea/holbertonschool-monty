#include "monty.h"
/**
 *
 *
 *
 */
void swap(stack_t **stack, unsigned int line_number)
{
	stack_t *head = *stack;
	stack_t *strlen = *stack;
	int tmp, element;

	for(element = 0; strlen != NULL; element++)
		strlen = strlen->next;

	if (element < 2)
	{
		fprintf(stderr, "L%d; can´t swap, stack too short\n", line_number);
		free(*stack);
		exit(EXIT_FAILURE);
	}

	tmp = head->n;
	head->n = head->next->n;
	head->next->n = tmp;
}
