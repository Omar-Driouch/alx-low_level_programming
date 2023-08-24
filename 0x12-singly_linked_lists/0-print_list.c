#include "lists.h"

/**
 * print_list - Prints the elements of a linked list.
 *
 * @head: a pointer to the head of the linked list.
 *
 * Return: The number of nodes in the list.
 */
size_t print_list(const list_t *head)
{

	int i = 0;

	while (head != NULL)
	{
		printf("[%d] - %s\n", head->len, head->str);
		head = head->next;
		i++;
	}
	return (i);
}
