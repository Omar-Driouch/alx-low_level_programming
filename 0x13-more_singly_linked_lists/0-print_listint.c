#include "lists.h"

/**
 * print_list - Prints the elements of a linked list.
 *
 * @head: a pointer to the head of the linked list.
 *
 * Return: The number of nodes in the list.
 */

size_t print_listint(const listint_t *head)
{
	listint_t *current = (listint_t *)head;
	size_t i = 0;

	while (current != NULL)
	{
		printf("%d\n", current->n);
		current = current->next;
		i++;
	}

	return (i);
}