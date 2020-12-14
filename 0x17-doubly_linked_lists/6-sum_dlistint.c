#include "lists.h"

/**
 *sum_dlistint- check the code for Holberton School students.
 *@head: header pointer
 * Return: result.
 */

int sum_dlistint(dlistint_t *head)
{
	int result = 0;

	if (head == NULL)
		return (0);

	while (head != NULL)
	{
		result = result + head->n;
		head = head->next;
	}

return (result);
}
