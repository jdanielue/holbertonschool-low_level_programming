#include "lists.h"
int largo_string(const char *string);

/**
 * *add_node - check the code for Holberton School students.
 * @head: header
 * @str: str
 * Return: Always 0.
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *ptr = NULL;

	ptr = malloc(sizeof(list_t));
	if (ptr == NULL)
		return (NULL);

	ptr->str = strdup(str);
	ptr->len = largo_string(str);
	ptr->next = (*head);
	(*head) = ptr;
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
