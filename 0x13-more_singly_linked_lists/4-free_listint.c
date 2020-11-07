#include "lists.h"

/**
 * free_listint - check the code for Holberton School students.
 * @head: pointer to the first element
 * Return: no return.
 */

void free_listint(listint_t *head)
{
	listint_t *clear, *advance;

	clear = head;


	while (clear != NULL)
	{
		advance = clear->next;
		free(clear);
		clear = advance;
	}
}
