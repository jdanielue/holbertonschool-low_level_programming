#include "lists.h"

/**
 * print_listint - singly linked list
 * @h: structure
 * Return: number of nodes
 */

size_t listint_len(const listint_t *h)
{
	size_t i;

	for (i = 0; h != NULL; i++)
	{
		h = h->next;
	}
	return (i);
}