#include "main.h"

/**
 *times_table - Prints the 9 times table, starting with 0.
 */
void times_table(void)
{
	int a, b, f;

	for (a = 0; a <= 9; a++)
	{
		_putchar('0');

		for (b = 1; b <= 9; b++)
		{
			_putchar(',');
			_putchar(' ');

			f = a * b;

			if (f <= 9)
				_putchar(' ');
			else
				_putchar((f / 10) + '0');

			_putchar((f % 10) + '0');
		}
		_putchar('\n');
	}
}
