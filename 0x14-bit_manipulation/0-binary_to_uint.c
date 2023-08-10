#include <stddef.h>
#include "main.h"

/**
 * check_valid_string - checks if a string has only 0's and 1's
 * @b: string to be checked
 *
 * Return: 1 if string is valid, 0 otherwise
 */
unsigned int binary_to_uint(const char *b)
{
	int i;
	unsigned int dvl = 0;

	if (!b)
		return (0);

	for (i = 0; b[i]; i++)
	{
		if (b[i] < '0' || b[i] > '1')
			return (0);
		dvl = 2 * dvl + (b[i] - '0');
	}

	return (dvl);
}
