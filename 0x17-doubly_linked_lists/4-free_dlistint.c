#include "lists.h"

/**
 * free_dlistint- check the code for Holberton School students.
 *@head: pointer to the first node
 * Return: no return.
 */

void free_dlistint(dlistint_t *head)
{
	while (head != NULL)
	{
		free(head);
		head = head->next;
	}
}
