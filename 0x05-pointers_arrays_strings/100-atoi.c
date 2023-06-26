#include "main.h"

/**
* _atoi - converts a string to an int
* @s: the string to be changed
*
* Return: the converted int
*/

int _atoi(char *s)
{
	int sign = 1;
	unsigned int n = 0;

	do {
		if (*s == '-')
			c *= -1;
		else if (*s >= '0' && *s <= '9')
			n = n * 10 + (*s - '0');
		else if (n > 0)
			break;
	} while (*s++);

	return (n * c);
}
