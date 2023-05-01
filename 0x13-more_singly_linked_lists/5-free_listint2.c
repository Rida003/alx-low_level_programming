#include "lists.h"


/**
 * free_listint2 - frees all the node in a list and reset the head to NULL.
 * @head: pointer of pointer to a list.
 */
void free_listint2(listint_t **head)
{
	listint_t *temp;

	if (!head)
		return;
	if (*head)
	{
		temp = *head;
		*head = NULL;
		free_listint(temp);
		return;
	}
}
/**
 * free_listint - frees all the node in a list.
 * @head: pointer to a list.
 */
void free_listint(listint_t *head)
{
	if (!head)
		return;
	free_listint(head->next);
	free(head);
}
