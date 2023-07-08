#include <stdio.h>

/**
 * _strpbrk - searches a string for any set of bytes
 * @s: string to be searched
 * @accept: string to be used
 *
 * Return: a pointer to the byte in s that matches one of the bytes in accept
 */
char *_strpbrk(char *s, char *accept)
{
	int num;

	while (*s)
	{
		for (num = 0; accept[num]; num++)
		{
		if (*s == accept[num])
		return (s);
		}
	s++;
	}
	return ('\0');
}
