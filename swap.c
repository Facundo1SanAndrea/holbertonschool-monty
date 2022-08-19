#include "monty.h"
/**
 *swap - swaps two elements
 *@stack: stack
 *@line_number: line code
 *Return: 0
 */
void swap(stack_t **stack, unsigned int line_number)
{
	stack_t *strlen, *next;
	int element = 0;

	for (element = 0; strlen->next; element++)
	       strlen = strlen->next;

	if (element < 2)
	{
		fprintf(stderr, "L%u: can't swap, stack too short\n", line_number);
		global_variable = "1";
		return;
	}

	next = (*stack)->next;
	next->prev = (*stack)->prev;
	(*stack)->prev->next = next;
	(*stack)->prev = next;
	(*stack)->next = next->next;
	next->next->prev = *stack;
	next->next = *stack;
	*stack = next;
}
