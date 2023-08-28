#include "lists.h"

/**
 * add_nodeint - add a new node at the beginning
 * of a linked list
 * @head: head of a list.
 * @n: n element.
 *
 * Return: address of the new element. NULL if it failed.
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *NewNode = (listint_t *)malloc(sizeof(listint_t));

	if (NewNode == NULL)
		return (NULL);

	NewNode->n = n;
	NewNode->next = NULL;

	if (*head == NULL)
		*head = NewNode;
	else
	{

		NewNode->n = n;
		NewNode->next = *head;
		*head = NewNode;
	}

	return (*head);
}
