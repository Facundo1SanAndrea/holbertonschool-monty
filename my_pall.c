#include "monty.h"
/**
 *
 *
 *
 */
void pall(stack_t **stack, unsigned int line_number)
{
	(void) line_number;
/*	printf("antes del while\n");*/
	while(stack)
	{
/*		printf("entró al while");*/
		printf("%d\n", head->n);
		head = head->next;
		/*if (head == *stack)
		{
			return;
		}*/
	}
}
