#include "lists.h"
/**
 * list_len - check the code for Holberton School students.
 * @h: header
 * Return: Always 0.
 */

size_t list_len(const list_t *h)
{
	size_t i;

	for (i = 0; h != NULL; i++)
	{
		h = h->next;
	}
	return (i);
}
