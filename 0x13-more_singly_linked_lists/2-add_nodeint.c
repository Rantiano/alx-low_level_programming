#include "lists.h"
#include <stdio.h>

/**
 * add_nodeint - this is to add a new node to a linked list at its begining
 * @head: A pointer on to the first node in the list
 * @n: New node data
 *
 * Return: pointer to the new node, or NULL if it fails
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newn;

	newn = malloc(sizeof(listint_t));
	if (!newn)
		return (NULL);

	newn->n = n;
	newn->next = *head;
	*head = newn;

	return (newn);
}
