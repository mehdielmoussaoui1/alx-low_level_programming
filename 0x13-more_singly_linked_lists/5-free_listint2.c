#include "lists.h"

/**
 * free_listint2 - frees a linked list
 * @head: head of a list.
 *
 * Return: no return.
 */
void free_listint2(listint_t **head)
{
	listint_t *mhd;
	listint_t *ji;

	if (head != NULL)
	{
		ji = *head;
		while ((mhd = ji) != NULL)
		{
			ji = ji->next;
			free(mhd);
		}
		*head = NULL;
	}
}
