#include "lists.h"
#include <stdio.h>

/**
 * get_nodeint_at_index - this returns the node at an index in linked list
 * @head: This specify the first node in the linked list
 * @index: gives index of the node to return
 *
 * Return: the pointer to the node we're looking for, or NULL
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int p = 0;
	listint_t *sample = head;

	while (sample && p < index)
	{
		sample = sample->next;
		p++;
	}

	return (sample ? sample : NULL);
}
