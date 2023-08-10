#include "main.h"
#include <stddef.h>

/**
 * read_textfile - reads a text file and prints it to the standard output
 * @filename: name of the file
 * @letters:  number of letters to be printed
 *
 * Return: number of letters read and pand printed
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
    char *buf;
    ssize_t fd, w, t;

    if (filename == NULL)
        return 0;

    fd = open(filename, O_RDONLY);
    if (fd == -1)
        return 0;

    buf = (char *)malloc(sizeof(char) * letters);
    if (buf == NULL)
    {
        close(fd);
        return 0;
    }

    t = read(fd, buf, letters);
    if (t == -1)
    {
        free(buf);
        close(fd);
        return 0;
    }

    w = write(STDOUT_FILENO, buf, t);
    if (w == -1 || (size_t)w != (size_t)t)
    {
        free(buf);
        close(fd);
        return 0;
    }

    free(buf);
    close(fd);
    return w;
}

