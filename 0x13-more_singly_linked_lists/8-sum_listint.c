#include "lists.h"
#include <stdio.h>

/**
 * sum_listint - this is to calculates the sum of the data in a listint_t list
 * @head: point to the first node in the linked list
 *
 * Return: return resulting sum
 */
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *sample = head;

	while (sample)
	{
		sum += sample->n;
		sample = sample->next;
	}

	return (sum);
}
