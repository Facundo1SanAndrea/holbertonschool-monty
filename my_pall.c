#include "monty.h"
/**
 *pall - prints value on stack
 *@stack: stack
 *@line_number: line code
 *Return: 0
 */
void pall(stack_t **stack, unsigned int line_number)
{
	stack_t *head;

	(void)line_number;
	head = *stack;

	for (head = *stack; head; head = head->next)
	{
		printf("%d\n", head->n);
	}
}
