#include "lists.h"

/**
 * find_listint_loop - finds the loop in a linked list
 * @head: pointer to the head of the list
 *
 * Return: The address of the node where the loop starts, or NULL
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *l = head;
	listint_t *h = head;

	while (l && h && h->next)
	{
		l = l->next;
		h = h->next->next;
		if (l == h)
		{
			l = head;
			while (l != h)
			{
				l = l->next;
				h = h->next;
			}
			return (l);
		}
	}

	return (NULL);
}
