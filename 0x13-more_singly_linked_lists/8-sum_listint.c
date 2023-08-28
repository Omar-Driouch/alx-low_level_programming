#include "lists.h"

/**
 * sum_listint - returns the sum of all the data (n) of
 * a linked list.
 * @head: head of a list.
 *
 * Return: sum of all the data (n).
 */

int sum_listint(listint_t *head)
{
	listint_t *node = head;
	int sum = 0;

	while (node != NULL)
	{
		sum += node->n;
		node = node->next;
	}

	return (sum);
}
