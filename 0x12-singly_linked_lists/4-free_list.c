#include "lists.h"

/**
 * free_list - function that frees a list_t list.
 * @head: pointer to the first element
 * Return: Always 0.
 */

void free_list(list_t *head)
{
	list_t *clear = head, *clear_n;


	for (clear = head; clear != NULL; clear = clear->next)
	{
		clear_n = clear->next;
		free(clear->str);
		free(clear);
		clear = clear_n;
	}
}
