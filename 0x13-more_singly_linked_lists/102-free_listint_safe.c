#include "lists.h"
#include <stdio.h>

/**
 * free_listint_safe - this function frees a linked list with a loop
 * @h: The pointer to the first node in the linked list
 *
 * Return: size number of elements that are in the freed list
 */
size_t free_listint_safe(listint_t **h)
{
	size_t limit = 0;
	int diff;
	listint_t *sample;

	if (!h || !*h)
		return (0);

	while (*h)
	{
		diff = *h - (*h)->next;
		if (diff > 0)
		{
			sample = (*h)->next;
			free(*h);
			*h = sample;
			limit++;
		}
		else
		{
			free(*h);
			*h = NULL;
			limit++;
			break;
		}
	}

	*h = NULL;

	return (limit);
}
