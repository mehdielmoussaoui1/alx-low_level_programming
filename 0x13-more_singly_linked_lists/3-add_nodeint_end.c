#include "lists.h"

/**
 * add_nodeint_end - adds a node to the end of a linked list
 * @head: pointer to the head of the list
 * @n: number to be used as content
 * mhd : new node
 * Return: address of the newly added node
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
 listint_t *mhd;
 listint_t *count = *head;

 mhd = malloc(sizeof(listint_t));
 if (!mhd)
 return (NULL);

 mhd->n = n;
 mhd->next = NULL;

 if (*head == NULL)
 {
 *head = mhd;
 return (mhd);
 }

 while (count->next)
count = count->next;

 count->next = mhd;

 return (mhd);
}
