#include "lists.h"

/**
 * insert_dnodeint_at_index - check the code for Holberton School students.
 *@h: header
 *@idx: idk
 *@n: index number
 * Return: pointer
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *nodonuevo, *tmp, *advance;
	unsigned int i;

	tmp = *h;

	nodonuevo = malloc(sizeof(dlistint_t));
	if (nodonuevo == NULL)
		return (NULL);

	for (i = 0; i < idx - 1; i++)
	{
		tmp = tmp->next;
		advance = tmp;
		advance = tmp->next;
	}

	nodonuevo->n = n;
	nodonuevo->next = advance;
	advance->prev = nodonuevo;
	nodonuevo->prev = tmp;
	tmp->next = nodonuevo;

	return (nodonuevo);
}
