#include "lists.h"

/**
 * free_listint_safe - frees a linked list safely
 * @h: pointer to the head of the list
 *
 * Return: the size of the list that was freed
 */
size_t free_listint_safe(listint_t **h)
{
	listint_t *current = *h;
	size_t size = 0;
	listint_t *temp;

	while (current != NULL)
	{
		temp = current->next;
		free(current);
		current = temp;
		size++;
	}

	*h = NULL;
	return (size);
}
