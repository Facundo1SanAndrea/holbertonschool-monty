#include "monty.h"
/**
 *pint - prints value at top of stack
 *@stack: stack
 *@line_number: line of code
 *Return: 0
 */

void pint(stack_t **stack, unsigned int line_number)
{

	if (stack == NULL || *stack == NULL)
	{
		fprintf(stderr, "L%u: can´t pint, stack empty\n", line_number);
		exit(EXIT_FAILURE);
	}
	printf("%d\n", (*stack)->n);
}
