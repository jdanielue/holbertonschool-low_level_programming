#include "lists.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

/**
 * add_nodeint_end - check the code for Holberton School students.
 * @head: pointer to the first node
 * @n: size of string
 * Return: Always 0.
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *temp, *new_node;

	temp = NULL;
	new_node = NULL;

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	new_node->next = NULL;
	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}
	temp = *head;
	while (temp->next != NULL)
	{
		temp = temp->next;
	}
	temp->next = new_node;
	return (new_node);
}
