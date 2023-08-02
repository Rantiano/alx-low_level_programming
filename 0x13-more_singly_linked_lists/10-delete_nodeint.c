#include "lists.h"
#include <stdio.h>

/**
 * delete_nodeint_at_index - this deletes a node at an index in a linked list
 * @head: This is the pointer to the first element in the list
 * @index: index information of the node to be deleted
 *
 * Return: 1 (Success), or -1 (Fail)
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *sample = *head;
	listint_t *newest = NULL;
	unsigned int p = 0;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(sample);
		return (1);
	}

	while (p < index - 1)
	{
		if (!sample || !(sample->next))
			return (-1);
		sample = sample->next;
		p++;
	}


	newest = sample->next;
	sample->next = newest->next;
	free(newest);

	return (1);
}
