#include "lists.h"

/**
 * add_dnodeint_end- check the code for Holberton School students.
 *@head: pointer to the first node
 *@n: value integer
 * Return: pointer to node.
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *nodonuevo, *tmp = NULL;

	nodonuevo = malloc(sizeof(dlistint_t));
	if (nodonuevo == NULL)
		return (NULL);

	nodonuevo->n = n;
	nodonuevo->prev = NULL;
	nodonuevo->next = NULL;
	tmp = *head;
	if (*head == NULL)
	{
		*head = nodonuevo;
	}
	else
	{
		while (tmp->next != NULL)
			tmp = tmp->next;
	tmp->next = nodonuevo;
	nodonuevo->prev = tmp;
	}
	return (nodonuevo);
}
