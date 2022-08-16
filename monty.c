#include "monty.h"
#include <unistd.h>

/**
 * main - monty program
 * @argc: number of arguments.
 * @argv: list of arguments.
 *
 */
int main(int argc, char **argv)
{
	if (argc != 2)
	{
		write(2,"USAGE: monty file\n", 18);
		exit(EXIT_FAILURE);
	}
	return(0);
}
