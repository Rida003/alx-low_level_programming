#include "lists.h"

/**
 * delete_nodeint_at_index - function that deletes the node at index index of a
 * listint_t linked list.
 *
 * @head: poiter of pointer to a head of a list.
 * @index: position of node to delete.
 *
 * Return: 1 (success) else -1 on fail.
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i;
	listint_t *node, *pre;

	if (!(*head))
		return (-1);
	i = 0;
	pre = NULL;
	node = *head;

	if (!index)
	{
		(*head) = (*head)->next;
		free(node);
		return (1);
	}
	while (node)
	{
		if (i == index)
		{
			pre->next = node->next;
			free(node);
			return (1);
		}
		pre = node;
		node = node->next;
		i++;
	}

	return (-1);
}
