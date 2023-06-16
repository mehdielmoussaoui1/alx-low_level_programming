#include <stdio.h>
/**
 * main - Prints numbers between 0 to 9 and letters between a to f.
 * Return: 0 (Success)
 */
int main(void)
{

	char number;

	for (number = 48; number < 58; number++)
	{
		putchar(number);
	}
	for (number = 'a'; number <= 'f'; number++)
	{
		putchar(number);
	}
	putchar('\n');
	return (0);
}

