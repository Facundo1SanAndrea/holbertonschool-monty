#include "monty.h"
/**
 *
 *
 *
 */
static int digit_only(char *arg)
{
	int i;

	for(i = 0; arg[i]; i++)
	{
		if (arg[i] == '-' && i == 0)
			continue;
		if(isdigit(arg[i]) == 0)
			return (1);
	}
	return (0);
}
