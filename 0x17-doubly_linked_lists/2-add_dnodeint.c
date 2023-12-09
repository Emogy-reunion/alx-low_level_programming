#include "lists.h"

/**
 * add_dnodeint - function that returns the
 * number of elements in a linked dlistint_t list.
 * @head: pointer to the head of the linked list
 * @n: value to add to the new node
 *
 * Return: pointer to new node, or NULL on failure
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node;

	if (head == NULL)
		return (NULL);
	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	new_node->prev = NULL;
	new_node->next = *head;
	*head = new_node;
	if (new_node->next != NULL)
		(new_node->next)->prev = new_node;
	return (new_node);
}
