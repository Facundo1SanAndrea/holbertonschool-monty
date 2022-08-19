#include "monty.h"
/**
 *add - adds top two elements
 *@stack: stack
 *@line_number: line of code
 *Return: 0
 */
void add(stack_t **stack, unsigned int line_number)
{
	int element, tmp, tmp2, suma;
	stack_t *strlen = *stack;

	for (element = 0; strlen->next; element++)
		strlen = strlen->next;

	if (element < 2)
	{
		fprintf(stderr, "L%d: can't add, stack too short\n", line_number);
		global_variable = "1";
		return;
	}
	tmp = (*stack)->n;
	tmp2 = (*stack)->next->n;
	suma = tmp + tmp2;
	(*stack)->next->n = suma;
	pop(stack, line_number);

}
