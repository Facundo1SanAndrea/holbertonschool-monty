#include "monty.h"
/**
 *swap - swaps two elements
 *@stack: stack
 *@line_number: line code
 *Return: 0
 */
void swap(stack_t **stack, unsigned int line_number)
{
	stack_t *head, *strlen, *prestack;

	head = *stack;

	if (head)
	{
		strlen = head->next;
	}
	else
	{
		fprintf(stderr, "L%d; can't swap, stack too short\n", line_number);
		exit(EXIT_FAILURE);
	}

	if (strlen)
	{
		prestack = strlen->next;
	}
	else
	{
		fprintf(stderr, "L%d; can't swap, stack too short\n", line_number);
		exit(EXIT_FAILURE);
	}

	if (prestack)
		prestack->prev = head;
	*stack = strlen;
	strlen->prev = NULL;
	strlen->next = head;
	head->prev = strlen;
	head->next = prestack;
}
