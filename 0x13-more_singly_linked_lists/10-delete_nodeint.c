#include "lists.h"

/**
 * delete_nodeint_at_index - deletes a node at an index
 * @head: pointer to the head of the list
 * @index: index of the node to be added
 *
 * Return: the address of the node
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
 listint_t *mhd = *head;
 listint_t *ji = NULL;
 unsigned int i = 0;

 if (*head == NULL)
 return (-1);

 if (index == 0)
 {
 *head = (*head)->next;
 free(mhd);
 return (1);
 }

 while (i < index - 1)
 {
 if (!mhd || !(mhd->next))
 return (-1);
 mhd = mhd->next;
 i++;
 }


 ji = mhd->next;
 mhd->next = ji->next;
 free(ji);

 return (1);
}
