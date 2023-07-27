#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * list_len - Counts the number of elements in a linked list.
 * @head: Pointer to the head of the list.
 *
 * Return: The number of elements in the linked list.
 */
size_t list_len(const list_t *head)
{
    size_t count = 0;
    const list_t *current = head;

    while (current != NULL)
    {
        count++;
        current = current->next;
    }

    return count;
}

/* Rest of the code remains the same as you provided */

