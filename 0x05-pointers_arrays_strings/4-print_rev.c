#include <stdio.h>
#include <string.h>
#include "main.h"

/**
*print_rev - Prints a string in reverse order
*@s: String to reverse
*Return: Nothing
*/

void print_rev(char *s)
{
	int a = strlen(s);

	while (a--)
	putchar(*(s + a));
	putchar(10);
}
