#include "lists.h"
#include <stdio.h>

/**
 * insert_nodeint_at_index - This inserts a new node in a linked list, at any
 * given position of time
 * @head: the pointer to the first of all the nodes in the list
 * @idx: The index of point where new node is added
 * @n: All data to be inserted in the new node
 *
 * Return: return the pointer to the new node, or NULL
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int p;
	listint_t *newn;
	listint_t *sample = *head;

	newn = malloc(sizeof(listint_t));
	if (!newn || !head)
		return (NULL);

	newn->n = n;
	newn->next = NULL;

	if (idx == 0)
	{
		newn->next = *head;
		*head = newn;
		return (newn);
	}

	for (p = 0; sample && p < idx; p++)
	{
		if (p == idx - 1)
		{
			newn->next = sample->next;
			sample->next = newn;
			return (newn);
		}
		else
			sample = sample->next;
	}

	return (NULL);
}
