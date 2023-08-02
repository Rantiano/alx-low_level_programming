#include "lists.h"
#include <stdio.h>

/**
 * pop_listint - this helps deletes the head node of a linked list
 * @head: This is the pointer to the first element in the linked list
 *
 * Return: this is to return the data inside the elements that was deleted,
 * or 0 if the list is empty
 */
int pop_listint(listint_t **head)
{
	listint_t *sample;
	int numb;

	if (!head || !*head)
		return (0);

	numb = (*head)->n;
	sample = (*head)->next;
	free(*head);
	*head = sample;

	return (numb);
}

