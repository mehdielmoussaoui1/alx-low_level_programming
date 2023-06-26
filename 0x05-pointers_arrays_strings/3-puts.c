#include "main.h"
/**
 * _puts - prints a string,a function that prints a string, followed by a new line, to stdout
 * @str: string to print
 * Description: prints a string
 * On success: returns no error
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str++);
	}
		_putchar('\n');
}
