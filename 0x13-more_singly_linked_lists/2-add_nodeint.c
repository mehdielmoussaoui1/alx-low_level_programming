#include "lists.h"

/**
 * add_nodeint - adds a node to the beginning of a linked list
 * @head: pointer to the head of the list
 * @n: integer to be used as content
 *
 * Return: address of the newly added node
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *n_d;

	n_d = malloc(sizeof(listint_t));
	if (n_d != NULL)
	{
		n_d->n = n;
		n_d->next = *head;
	}
	else
		return (NULL);
	if (*head != NULL)
		n_d->next = *head;
	*head = n_d;
	return (n_d);
}
