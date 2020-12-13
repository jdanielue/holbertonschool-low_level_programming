#include "lists.h"

/**
 * add_dnodeint_end- check the code for Holberton School students.
 *@head: pointer to the first node
 *@n: value integer
 * Return: pointer to node.
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
dlistint_t *nodonuevo, *tmp;

	nodonuevo = malloc(sizeof(dlistint_t));
	if (nodonuevo == NULL)
		return (NULL);

	tmp = *head;
	nodonuevo->n = n;
	if (*head == NULL)
	{
	nodonuevo->next = NULL;
	nodonuevo->prev = NULL;
	}
	else
	while (tmp != NULL)
	{
	nodonuevo->next = tmp;
	nodonuevo->prev = NULL;
	tmp->next = tmp;
	}

	printf("%d\n", nodonuevo->n);


	return (nodonuevo);
}
