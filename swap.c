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
	int tmp, tmp2;

	head = *stack;

	if (head)
	{
		strlen = head->next;
	}
	else
	{
		fprintf(stderr, "L%d: can't swap, stack too short\n", line_number);
		global_variable = "1";
		return;
	}
	if (strlen)
	{
		prestack = strlen->next;
	}
	else
	{
		fprintf(stderr, "L%d: can't swap, stack too short\n", line_number);
		global_variable = "1";
		return;
	}

	if (prestack)
		prestack->prev = head;
	tmp = (*stack)->n;
	tmp2 = (*stack)->next->n;
	(*stack)->n = tmp2;
	(*stack)->next->n = tmp;
}
