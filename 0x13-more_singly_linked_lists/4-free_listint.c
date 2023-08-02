#include "lists.h"
#include <stdio.h>

/**
 * free_listint - This function frees a linked list
 * @head: The listint_t is the list to be freed
 */
void free_listint(listint_t *head)
{
	listint_t *sample;

	while (head)
	{
		sample = head->next;
		free(head);
		head = sample;
	}
}
