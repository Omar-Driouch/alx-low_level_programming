#include "lists.h"

/**
 * print_list - Prints the elements of a linked list.
 *
 * @head: a pointer to the head of the linked list.
 *
 * Return: The number of nodes in the list.
 */
size_t print_list(const list_t *h)
{

	size_t i = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[%d] %s\n", 0, "(nil)");
		else
			printf("[%d] - %s\n", h->len, h->str);

		h = h->next;
		i++;
	}
	return (i);
}
