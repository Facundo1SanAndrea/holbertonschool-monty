#include "monty.h"
/**
 *
 *
 *
 */
void my_pall(stack_t **stack, unsigned int line_number)
{
	stack_t *head;

	head = *stack;
	while(head != NULL)
	{
		fprintf("%d\n", head->n);
		head = head ->next;
		if (head == *stack)
		{
			return;
		}
	}
}
