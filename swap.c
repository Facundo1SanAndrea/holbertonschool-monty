#include "monty.h"
/**
 *swap - swaps two elements
 *@stack: stack
 *@line_number: line code
 *Return: 0
 */
void swap(stack_t **stack, unsigned int line_number)
{
	int tmp, tmp2, element = 0;

	if (element > 2)
	{
		tmp = (*stack)->n;
        	tmp2 = (*stack)->next->n;
        	(*stack)->n = tmp2;
        	(*stack)->next->n = tmp;
	}

	fprintf(stderr, "L%d: can't swap, stack too short\n", line_number);
	global_variable = "1";
	return;	
}
