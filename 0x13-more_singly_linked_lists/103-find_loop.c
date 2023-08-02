#include "lists.h"
#include <stdio.h>

/**
 * find_listint_loop - function that will finds the loop in a linked list
 * @head: linked list to search for in the main
 *
 * Return: The address of the node where the loop starts, or NULL when no loop
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *str = head;
	listint_t *end = head;

	if (!head)
		return (NULL);

	while (str && end && end->next)
	{
		end = end->next->next;
		str = str->next;
		if (end == str)
		{
			str = head;
			while (str != end)
			{
				str = str->next;
				end = end->next;
			}
			return (end);
		}
	}

	return (NULL);
}

