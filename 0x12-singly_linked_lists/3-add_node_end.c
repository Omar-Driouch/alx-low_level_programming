#include "lists.h"

/**
 * add_node_end - Adds a new node to the beginning of a list.
 *
 * @head: A pointer to the head of the linked list.
 * @str: The string to store in the new node.
 *
 * Return: A pointer to the updated head of the list.
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node;
	list_t *temp;

	if (!str)
		return (NULL);

	new_node = malloc(sizeof(list_t));
	if (!new_node)
		return (NULL);

	new_node->str = strdup(str);
	if (!new_node->str)
	{
		free(new_node);
		return (NULL);
	}

	new_node->len = strlen(str);
	new_node->next = NULL;

	if (*head == NULL)
	{
		*head = new_node;
	}
	else
	{
		temp = *head;
		while (temp->next)
		{
			temp = temp->next;
		}
		temp->next = new_node;
	}

	return (*head);
}
