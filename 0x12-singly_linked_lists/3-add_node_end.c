#include "lists.h"
int largo_string(const char *string);
/**
 * add_node_end - check the code for Holberton School students.
 * @head: pointer to first element
 * @str: string
 * Return: Always 0.
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *ptr, *temp;

	ptr = NULL;
	temp = (*head);

	ptr = malloc(sizeof(list_t));
	if (ptr == NULL)
	{
		return (NULL);
	}

	ptr->str = strdup(str);
	ptr->len = largo_string(str);
	ptr->next = NULL;

	if (*head == NULL)
	{
		*head = ptr;
		return (ptr);
	}
	while (temp->next != NULL)
	{
		temp = temp->next;
	}
	temp->next = ptr;
	return (ptr);

}

/**
 * *largo_string - check the code for Holberton School students.
 * @string: string
 * Return: largo.
 */

int largo_string(const char *string)
{
int largo;
int l;

largo = 0;


	for (l = 0; *(string + l) != '\0'; l++)
	largo++;
	return (largo);
}
