#include "main.h"

/**
 *_strlen - a function that returns the length of a string.
 * @s: string
 *Return: returns length as integer;
 */

int _strlen(char *s)
{
	int a = 0;

	while (*(s + a) != '\0')
		a++;

	return (a);
}
