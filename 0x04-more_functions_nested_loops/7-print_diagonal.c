#include <stdio.h>
#include "main.h"

/**
*print_diagonal - prints a diagonal
*@n: parameter
*Return: returns nothing
*/

void print_diagonal(int n)
{
	int a, space;

	if (n > 0)
	{
		for (a = 0; a < n; a++)
		{
			for (b = 0; b < a; b++)
			{
				putchar(' ');
			}

			putchar('\\');

			if (a == (n - 1))
			{
				continue;
			}
			putchar('\n');
		}
	}
	putchar('\n');
}
