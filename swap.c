#include "monty.h"
/**
 *swap - swaps two elements
 *@stack: stack
 *@line_number: line code
 *Return: 0
 */
void swap(stack_t **stack, unsigned int line_number)
{
	stack_t *head, *strlen;

	if ((*stack)->next == NULL)
	{
		fprintf(stderr, "L%d: can't swap, stack too short\n", line_number);
		global_variable = "1";
		free(stack);
		return;
	}
	else if (!(*stack))
	{
		fprintf(stderr, "L%d: can't swap, stack too short\n", line_number);
		global_variable = "1";
		return;
	}
	else
	{
		head = *stack, strlen = (*stack)->next;
		strlen->prev = NULL, head->prev = strlen;
		head->next = strlen->next, strlen->next = head;
		*stack = strlen;
	}
}
