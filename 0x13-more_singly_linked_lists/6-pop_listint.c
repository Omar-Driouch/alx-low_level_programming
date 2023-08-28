#include "lists.h"

/**
 * pop_listint - deletes the head node of a listint_t linked
 * list, and returns the head node’s data (n).
 * @head: head of a list.
 *
 * Return: void.
 */
int pop_listint(listint_t **head)
{
	listint_t *current;
	int n;

	if (head != NULL && *head != NULL)
	{
		current = *head;
		*head = current->next;
		n = current->n;
		free(current);
		return (n);
	}
	else
	{
		return (0);
	}
}
