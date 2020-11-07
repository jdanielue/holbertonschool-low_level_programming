#include "lists.h"
/**
 * add_nodeint - check the code for Holberton School students.
 * @head: pointer
 * @n: string
 * Return: Always 0.
 */

listint_t *add_nodeint(listint_t **head, const int n)
{

	listint_t *ptr;

	ptr = *head;
	ptr = malloc(sizeof(listint_t));
	if (ptr == NULL)
	{
		return (NULL);
	}
	ptr->n = n;
	ptr->next = *head;
	*head = ptr;
	return (ptr);
}
