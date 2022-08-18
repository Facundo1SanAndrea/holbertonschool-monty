#include "morty.h"
/**
 *
 *
 *
 *
 */

void pop(stack_t **stack, unsigned int line_number)
{
	stack_t *head = *stack
	
	if (stack == NULL)
	{
		fprintf(STDERR_FILENO,
				"L%u: can´t pop any empty stack\n",
				line_number);
		exit(EXIT_FAILURE);
	}
	(*stack) = head->next;
	if (head->next)
		head->next->prev = NULL;

	free(head);
}	
