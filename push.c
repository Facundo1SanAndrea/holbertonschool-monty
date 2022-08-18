#include "monty.h"

char *global_variable;

void push(stack_t **stack, unsigned int linea)
{
	stack_t *aux = NULL;
	int i = 0;

	while (global_variable[i])
        {
                if (global_variable[i] == '-' || global_variable[i] == '+')
                {
                        i++;
                        continue;
                }
                else if (!(isdigit(global_variable[i])))
                {
                fprintf(stderr,"L%d: usage: push integer\n", linea);
                exit(EXIT_FAILURE);
                global_variable = "a";
                }
                i++;
        }
	aux = malloc(sizeof(stack_t));
	if (!aux)
		printf("%d usage: push integer.\n", linea);

	aux->prev = NULL;
	aux->n = atoi(global_variable);
	aux->next = *stack;

	if (*stack)
		(*stack)->prev = aux;
	*stack = aux;
}
