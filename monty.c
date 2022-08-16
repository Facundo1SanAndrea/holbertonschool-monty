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

/*int (*picker(char *token))(**stack_t stack, int line_number)
{
	instruction_t[] = {
		{"push", push}
		{"pall", pall}
	};
	int i = 0;

	while (i < 1)
	{
		while(instruction_t[i].opcode)
		{
			if (instruction_t[i].opcode[0] == token)
			return (instruction_t[i].f);
			i++;
		}
	}
	return(1);
}*/
