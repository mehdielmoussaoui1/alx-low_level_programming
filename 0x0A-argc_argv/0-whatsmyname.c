#include <stdio.h>

/**
 * main - write a program that prints its name, followed by a new line.
 * if you rename the program, it will print the new name, without compile
 * you should not remove path before the name of the program
 *
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: Always 0 (Success)
 */
int main(int argc,  char *argv[])
{
	printf("%s\n", *argv[0]);
        (void)argc;
	return (0);
}
