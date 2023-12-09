#include "lists.h"

/**
 * dlistint_len - count the nodes in the linked list
 * @h: pointer to the head of the linked list
 *
 * Return: no of nodes
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t k;

	for (k = 0; h != NULL; k++)
		h = h->next;
	return (k);
}
