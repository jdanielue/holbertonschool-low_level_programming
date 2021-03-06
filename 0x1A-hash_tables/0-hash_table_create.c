#include "hash_tables.h"

/**
* hash_table_create - check the code for Holberton School students.
* @size: size of array
* Return: pointer to the structure.
*
*/

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *pointer_table = NULL;
	unsigned long int i = 0;

	pointer_table = malloc(sizeof(hash_table_t));
	if (pointer_table == NULL)
		return (NULL);

	pointer_table->array = malloc(sizeof(hash_node_t *) * size);
	if (pointer_table->array == NULL)
		return (NULL);

	pointer_table->size = size;

	for (i = 0; i < size; i++)
	{
		*(pointer_table->array + i) = NULL;
	}
	return (pointer_table);
}
