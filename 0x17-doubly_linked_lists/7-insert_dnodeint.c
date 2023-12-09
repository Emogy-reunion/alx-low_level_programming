#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a new node at a specified position
 * @h: pointer to the head of the list
 * @idx: index at which to insert the new node
 * @n: data to enter into new node
 *
 * Return: NULL on failure, pointer to the new node
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node, *current, *next;
	unsigned int k;

	if (h == NULL)
		return (NULL);
	if (idx != 0)
	{
		current = *h;
		for (k = 0; k < idx - 1 && current != NULL; k++)
			current = current->next;
		if (current == NULL)
			return (NULL);
	}
	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	if (idx == 0)
	{
		next = *h;
		*h = new_node;
		new_node->prev = NULL;
	}
	else
	{
		new_node->prev = current;
		next = current->next;
		current->next = new_node;
	}
	new_node->next = next;
	if (new_node->next != NULL)
		new_node->next->prev = new_node;
	return (new_node);
}
