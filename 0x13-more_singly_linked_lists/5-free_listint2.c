#include "lists.h"

/**
 * free_listint2 - check the code for Holberton School students.
 * @head: head pointer
 * Return: void
 */

void free_listint2(listint_t **head)
{
	listint_t *clear, *temp;

	clear = *head;
	while (clear != NULL)
	{
		temp = clear->next;
		free(clear);
		clear = temp;
		clear = clear->next;
		free(temp);
	}
}
