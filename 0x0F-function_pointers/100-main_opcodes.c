#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the opcodes of the main function
 * @argc: number of arguments passed to the program
 * @argv: array of arguments passed to the function
 *
 * Return: 0 on success, 1 or 2 otherwise
 */
int main(int argc, char *argv[])
{
	int bytes, i;
	char *a;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	bytes = atoi(argv[1]);

	if (bytes < 0)
	{
		printf("Error\n");
		exit(2);
	}

	a = (char *)main;

	for (i = 0; i < bytes; i++)
	{
		if (i == bytes - 1)
		{
			printf("%02hhx\n", a[i]);
			break;
		}
		printf("%02hhx ", a[i]);
	}
	return (0);
}

