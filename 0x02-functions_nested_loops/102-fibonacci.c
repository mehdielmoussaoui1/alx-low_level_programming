#include <stdio.h>

/**
 * main - Prints first 50 Fibonacci numbers, starting with 1 and 2,
 * separated by a comma followed by a space.
 *
 * Return: Always 0.
 */
int main(void)
{
	int count;
	unsigned long a = 0, b = 1, s;

	for (count = 0; count < 50; count++)
	{
		s = a + b;
		printf("%lu", s);

		a = b;
		b = s;

		if (count == 49)
			printf("\n");
		else
			printf(", ");
	}

	return (0);
}
