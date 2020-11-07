#include "lists.h"

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */

void free_listint(listint_t *head)
{
	listint_t *clear, *advance;

	clear = head;


	 while (clear != NULL)
	 {
		 advance = clear->next;
		 free (clear);
		 clear = advance;
	 }
}