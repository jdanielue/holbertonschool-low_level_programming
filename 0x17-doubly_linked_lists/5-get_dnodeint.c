#include "lists.h"

/**
 * get_dnodeint_at_index - check the code for Holberton School students.
 * @head: header pointer
 * @index: position to add
 * Return: pointer
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int counter;
	dlistint_t *puntero;

	puntero = head;

	for (counter = 0; counter < index; counter++)
	{
		puntero = puntero->next;
	}

	return (puntero);
}
