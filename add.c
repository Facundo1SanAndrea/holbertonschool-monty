#include "monty.h"
/**
 *add - adds top two elements
 *@stack: stack
 *@line_number: line of code
 *Return: 0
 */
void add(stack_t **stack, unsigned int line_number)
{
	stack_t *head = *stack;
	stack_t *strlen = *stack;
	int element;

	for (element = 0; strlen->next; element++)
		strlen = strlen->next;

	if (element < 2)
	{
		fprintf(stderr, "L%d: can't add, stack too short\n", line_number);
		global_variable = "1";
		return;
	}

	head = (*stack)->next;
	(*stack)->next->n += (*stack)->n;
	free(*stack);
/*	head->stack = NULL;*/
	(*stack) = head->next;
}
