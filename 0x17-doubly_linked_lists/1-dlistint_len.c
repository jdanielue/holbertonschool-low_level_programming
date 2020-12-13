#include "lists.h"

/**
 *  dlistint_len- size of linked lists.
 *@h: header
 * Return: number of elements
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t n_element;

	for (n_element = 0; h != NULL; n_element++)
	{
		h = h->next;
	}
	return (n_element);
}
