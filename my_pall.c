#include "monty.h"
/**
 *
 *
 *
 */
void pall(stack_t **stack, unsigned int line_number)
{
	stack_t *head = *stack;

	(void) line_number;
	while(head->next)
	{
		printf("%d\n", head->n);
		head = head->next;
	}
}
