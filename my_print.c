#include "monty.h"
/**
 *
 *
 *
 */

void my_pint(stack_t **stack, unsigned int line_number)
{
	stack_t *head = *stack;

	if (stack == 0)
	{
		fprintf(STDOUT_FILENO,
				"L%u: can´t pint, stack empty\n",
			       	line_number);
		exit(EXIT_FAILURE);
	}
	printf("%d\n", head ->n);
}
