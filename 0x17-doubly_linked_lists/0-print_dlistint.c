#include "lists.h"

/**
 * print_dlistint - doubly linked list
 * @h: header
 * Return: number of elements
 */

size_t print_dlistint(const dlistint_t *h)
{
	size_t n_element;

	for (n_element = 0; h != NULL; n_element++)
	{
		printf("%d\n", h->n);
		h = h->next;
	}
	return (n_element);
}
