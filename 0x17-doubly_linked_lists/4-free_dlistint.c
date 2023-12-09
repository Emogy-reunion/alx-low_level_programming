#include "lists.h"
#include <stdlib.h>

/**
 * free_dlistint - frees a list
 * @head: pointer to the head of the list
 *
 * Return: nothing
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *next;

	while (head != NULL)
	{
		next = head->next;
		free(head);
		head = next;
	}
}
