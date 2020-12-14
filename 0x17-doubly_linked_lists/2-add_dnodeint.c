#include "lists.h"

/**
 * add_dnodeint - check the code for Holberton School students.
 *@head: pointer to the first node
 *@n: value integer
 * Return: pointer to node.
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *nodonuevo, *tmp;

	nodonuevo = malloc(sizeof(dlistint_t));
	if (nodonuevo == NULL)
		return (NULL);

	nodonuevo->n = n;
	nodonuevo->prev = NULL;
	nodonuevo->next = NULL;
	if (*head == NULL)
	{
	*head = nodonuevo;
	}
	else
	{
	tmp = *head;
	nodonuevo->next = tmp;
	tmp->prev = nodonuevo;
	*head = nodonuevo;
	}

	return (nodonuevo);
}
