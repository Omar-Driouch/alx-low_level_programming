#include "lists.h"

/**
 * add_dnodeint_end - Adds a new node at the end of a doubly linked list
 * @head: Pointer to a pointer to the head of the doubly linked list
 * @n: Value to be stored in the new node
 *
 * Return: Address of the newly created node, or NULL on failure
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new = malloc(sizeof(dlistint_t));
	dlistint_t *current = *head;

	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = NULL;

	if (*head == NULL)
	{
		new->prev = NULL;
		*head = new;
		return (new);
	}

	while (current->next != NULL)
	{
		current = current->next;
	}

	current->next = new;
	new->prev = current;

	return (new);
}
