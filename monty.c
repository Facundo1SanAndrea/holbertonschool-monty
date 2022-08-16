#include "monty.h"

/**
 * error_message - this function chekcs error in the monty program
 * @argc: number of arguments.
 * @argv: list of arguments.
 *
 */
int error_message(int argc, char **argv)
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
	
	return(0);
}


