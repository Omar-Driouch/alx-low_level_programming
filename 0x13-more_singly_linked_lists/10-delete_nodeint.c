#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the node at index
 * of a linked list.
 * @head: head of a list.
 * @index: index of the list where the node is
 * deleted.
 *
 * Return: 1 if it succeeded, -1 if it failed.
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *current = *head;
	unsigned int i = 0;

	if (index == 0 && head != NULL && *head != NULL)
	{
		current = *head;
		*head = current->next;
		free(current);
		return (1);
	}

	if (current == NULL || (current->next == NULL && index != 0))
	{
		return (-1);
	}

	while (current != NULL)
	{
		if (i == index - 1)
		{
			current = *head;
			*head = current->next;
			free(current);
			return (1);
		}
		current = current->next;
		i++;
	}

	return (-1);
}
