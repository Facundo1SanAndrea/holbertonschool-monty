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

void check_instruction(char *token, char *line, FILE *aux_argv, unsigned int line_number)
{
	if (get_func(token) != NULL)
	{
		get_func(token);
	}
	else
	{
		fprintf(stderr, "L%d: unknown instruction %s\n", line_number, token);
		fclose(aux_argv);
		free(line);
		exit(EXIT_FAILURE);
	}


}

/**
 *
 *
 */

int (*get_func(char *token))(**stack_t stack, int line_number)
{
        instruction_t[] = {
                {"push", push}
                {"pall", pall}
		{NULL, NULL} 
        };
        int i = 0;

        while (i < 3)
        {
                while(instruction_t[i].opcode)
                {
                        if (instruction_t[i].opcode == token)
                        return (instruction_t[i].f);
                        i++;
                }
        }
        return(instruction_t[3].f);
}
