#include "lists.h"

/**
 * add_dnodeint_end- check the code for Holberton School students.
 *@head: pointer to the first node
 *@n: value integer
 * Return: pointer to node.
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *nodonuevo;

	nodonuevo = malloc(sizeof(dlistint_t));
	if (nodonuevo == NULL)
		return (NULL);


	nodonuevo->n = n;
	*head = nodonuevo;
	nodonuevo->next = NULL;
	nodonuevo->prev = NULL;
	printf("%d\n", nodonuevo->n);


	return (nodonuevo);
}
