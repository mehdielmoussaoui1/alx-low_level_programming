#include "main.h"

/**
 * _calloc - allocates memory using malloc, and initializes it to zero
 * @size: size of the memory block to be allocated
 * @nmemb: number of elements
 *
 * Return: pointer to the address of the memory block
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
    char *med;
    unsigned int i;

    if (nmemb == 0 || size == 0)
        return (NULL);
    med = malloc(nmemb * size);
    if (med != NULL)
    {
        for (i = 0; i < (nmemb * size); i++)
            med[i] = 0;
        return (med);
    }
    else
        return (NULL);
}
