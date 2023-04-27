#include "lists.h"
#include <stdlib.h>

/**
 * free_list - frees the memory of a list.
 * @head: pointer to a list.
 *
 * Return: Nothing
 */
void free_list(list_t *head)
{
	if (!head)
		return;

	free_list(head->next);
	if (head->str)
		free(head->str);
	free(head);
}
