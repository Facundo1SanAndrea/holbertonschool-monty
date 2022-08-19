#include "monty.h"
/**
 *sub - sub top two elements
 *@stack: stack
 *@line_number: line of code
 *Return: 0
 */
void sub(stack_t **stack, unsigned int line_number)
{
        stack_t *head = *stack, *aux = *stack;
        stack_t *strlen = *stack;
        int element = 0;

        for (element = 0; strlen->next; element++)
                strlen = strlen->next;

        if (element < 2)
        {
                fprintf(stderr, "L%d: can't add, stack too short\n", line_number);
                global_variable = "1";
                return;
        }

        aux = aux->next;
        aux->n -= head->n;
        free(*stack);
        *stack = head->next;
}
