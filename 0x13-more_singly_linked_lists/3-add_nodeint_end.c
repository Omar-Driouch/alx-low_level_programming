#include "lists.h"

/**
 * add_nodeint_end - add a new node at the end
 * of a linked list
 * @head: head of a list.
 * @n: n element.
 *
 * Return: address of the new element. NULL if it failed.
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *Current;
	listint_t *NewNode = (listint_t *)malloc(sizeof(listint_t));

	if (NewNode == NULL)
		return (NULL);

	NewNode->n = n;
	NewNode->next = NULL;

	if (*head == NULL)
		*head = NewNode;
	else
	{
		Current = *head;
		while (Current->next != NULL)
		{
			Current = Current->next;
		}

		Current->next = NewNode;
	}

	return (*head);
}
