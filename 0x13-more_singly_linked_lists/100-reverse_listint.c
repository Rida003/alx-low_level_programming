#include "lists.h"
#include <stdio.h>

/**
 * reverse_listint - reverse a list.
 * @head: pointer of a pointer to a list.
 *
 * Return: pointer to list.
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *temp, *pre;

	if (!head || !(*head))
	{
		return (NULL);
	}

	if (!(*head)->next)
	{
		return (*head);
	}
	temp = *head;
	pre = NULL;
	while (1)
	{
		if (!pre)
		{
			pre = *head;
			temp = temp->next;
			pre->next = NULL;
			*head = pre;
		}
		else
		{
			pre = temp;
			temp = temp->next;
			pre->next = *head;
			if (!temp)
			{
				temp = pre;
				break;
			}
			*head = pre;
		}
	}
	*head = temp;

	return (*head);
}
