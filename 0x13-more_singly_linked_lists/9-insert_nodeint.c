#include "lists.h"

/**
 * insert_nodeint_at_index - a function that inserts
 * a new node at a given position.
 * @head: head of a list.
 * @idx: is the index of the list where the new node should be added
 * @n: value of the new node
 * Return: Returns: the address of the new node, or NULL if it failed
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *current = *head;
	listint_t *newNode;
	unsigned int i = 0;

	if (head == NULL)
		return (NULL);

	newNode = (listint_t *)malloc(sizeof(listint_t));
	if (newNode == NULL)
		return (NULL);

	newNode->n = n;
	newNode->next = NULL;

	if (idx == 0)
	{
		newNode->next = *head;
		*head = newNode;
		return (newNode);
	}

	while (current != NULL)
	{
		if (i == idx - 1)
		{
			newNode->next = current->next;
			current->next = newNode;
			return (newNode);
		}
		current = current->next;
		i++;
	}

	free(newNode);
	return (NULL);
}
