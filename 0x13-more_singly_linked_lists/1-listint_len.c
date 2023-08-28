#include "lists.h"

/**
 * listint_len - returns the number of elements in
 * a linked list.
 * @head: head of a list.
 *
 * Return: numbers of nodes.
 */

size_t listint_len(const listint_t *head)
{
	listint_t *current = (listint_t *)head;
	size_t i = 0;

	while (current != NULL)
	{
		current = current->next;
		i++;
	}

	return (i);
}
