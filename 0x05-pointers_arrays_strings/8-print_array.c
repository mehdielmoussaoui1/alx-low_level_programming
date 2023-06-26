#include "main.h"

/**
 * print_array - a function that prints n elements of an array
 * @a: array name
 * @n: is the number of elements OF the array to be printed
 * Return: a and n inputs
 */

void print_array(int *a, int n)
{
	int c;

	for (c = 0; c < n ; c++)
	{
		if (c != n - 1)
			printf("%d, ", a[c]);
		else
			printf("%d", a[c]);

	}
	putchar(10);
}
