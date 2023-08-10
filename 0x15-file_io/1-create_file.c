#include "main.h"
#include <stddef.h>

/**
 * _strlen - counts string length
 * @str: string to be used
 *
 * Return: length of the string
 */
int _strlen(char *str)
{
	int mhd = 0;

	while (str[mhd] != '\0')
		mhd++;
	return (mhd);
}

int create_file(const char *filename, char *text_content)
{
	int file, wrote;

	if (filename == NULL)
		return (-1);
	file = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);
	if (file == -1)
		return (-1);
	if (text_content != NULL)
	{
		wrote = write(file, text_content, _strlen(text_content));
		if (wrote == -1)
		{
			close(file);
			return (-1);
		}
		close(file);
		return (1);
	}
	else
	{
		close(file);
		return (1);
	}
}
