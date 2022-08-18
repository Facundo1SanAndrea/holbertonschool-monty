#include "monty.h"

/**
 * error_message - this function chekcs error in the monty program
 * @argc: number of arguments.
 * @argv: list of arguments.
 *
 */
FILE *error_message(int argc, char **argv)
{
	FILE *archive;

	if (argc != 2)
	{
		write(2,"USAGE: monty file\n", 18);
		exit(EXIT_FAILURE);
	}
	archive = fopen(argv[1], "r");
	if (!archive)
	{
		write(2,"Error: Can't open file ", 23);
		write(2, argv[1], strlen(argv[1]));
		write(2, "\n", 1);
		exit(EXIT_FAILURE);
	}
	
	return (archive);
}

/**
 *
 *
 */

int get_func(char *token, unsigned int line_number, stack_t **stack)
{
        int i = 0;
	instruction_t inst[] = {
		{"prueba", prueba},
		{"push", push},
		{"pall", pall},
		{"pint", pint},
		{"swap", swap},
		{"add", add},
		{"nop", nop},
		{"pop", pop},
		{NULL, NULL} 
        };

	while (inst[i].opcode)
        {
		if (!(strcmp(inst[i].opcode, token)))
		{
			(*(inst[i].f))(stack, line_number);
			return (0);
		}
		i++;
        }
	return (1);
}

int check_inst(char *token, unsigned int l_n, stack_t *st)
{
        int n = 0;

        n = get_func(token, l_n, &st);
        if (n == 1)
        {
                fprintf(stderr, "L%d: unknown instruction %s\n", l_n, token);
                /*fclose(aux_argv);*/
                /*free(line);*/
        }
	return (n);


}
