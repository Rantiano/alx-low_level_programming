#include "lists.h"
#include <stdio.h>

/**
 * add_nodeint_end - puts a node at the end of a linked list line
 * @head: This is the pointer to the first element in the list
 * @n: Parameter to insert in the new element
 *
 * Return: The pointer to the new node, or NULL if fails
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newn;
	listint_t *temp = *head;

	newn = malloc(sizeof(listint_t));
	if (!newn)
		return (NULL);

	newn->n = n;
	newn->next = NULL;

	if (*head == NULL)
	{
		*head = newn;
		return (newn);
	}

	while (temp->next)
		temp = temp->next;

	temp->next = newn;

	return (newn);
}
