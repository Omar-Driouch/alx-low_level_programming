#include "lists.h"

/**
 * list_len - Prints the elements of a linked list.
 *
 * @head: a pointer to the head of the linked list.
 *
 * Return: The number of nodes in the list.
 */
size_t list_len(const list_t *head)
{

	size_t i = 0;

	while (head != NULL)
	{
		head = head->next;
		i++;
	}
	return (i);
}
