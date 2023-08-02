#include "lists.h"
#include <stdio.h>

/**
 * free_listint2 - this frees all linked list
 * @head: This is the pointer to the listint_t list to be freed
 */
void free_listint2(listint_t **head)
{
	listint_t *sample;

	if (head == NULL)
		return;

	while (*head)
	{
		sample = (*head)->next;
		free(*head);
		*head = sample;
	}

	*head = NULL;
}
