#include "lists.h"


static listint_t *new_node(const int n);
/**
 * insert_nodeint_at_index - function that inserts a new node at a given
 * position.
 *
 * @head: pointer of pointer to a listint_t
 * @idx: index of the list where the new node should be added
 * @n: value to set the new node to.
 *
 * Return: pointer to the head.
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i;
	listint_t *temp, *new;

	if (!(*head) && idx == 0)
	{
		*head = new_node(n);
		return (*head);
	}

	i = 0;
	temp = *head;
	while (temp)
	{
		if (idx == 0)
		{
			*head = new_node(n);
			(*head)->next = temp;
			return (*head);
		}
		else if (i == idx - 1)
		{
			new = new_node(n);
			new->next = temp->next;
			temp->next = new;
			return (new);
		}
		temp = temp->next;
		i++;
	}
	return (NULL);
}


/**
 * new_node - creates a new listint_t node.
 * @n: number to place inside the node.
 *
 * Return: pointer to the new node.
 */
static listint_t *new_node(const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);
	new->n = n;
	new->next = NULL;
	return (new);
}
