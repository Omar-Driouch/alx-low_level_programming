#include "lists.h"

/**
 * find_listint_loop - finds the loop in a linked list
 * @head: pointer to the head of the list
 *
 * Return: The address of the node where the loop starts, or NULL if there is no loop
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *L = head;
	listint_t *h = head;

	while (L && h && h->next)
	{
		L = L->next;
		h = h->next->next;
		if (L == h)
		{
			L = head;
			while (L != h)
			{
				L = L->next;
				h = h->next;
			}
			return L;
		}
	}

	return (NULL);
}
