#include "monty.h"
/**
 *pall - prints value on stack
 *@stack: stack
 *@line_number: line code
 *Return: 0
 */
void pall(stack_t **stack, unsigned int line_number)
{
	stack_t *head = *stack;
	line_number += 0;

	while(head->next)
	{
		printf("%d\n", head->n);
		head = head->next;
	}
}
