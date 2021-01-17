#include "hash_tables.h"

/**
 * hash_table_set -  function that adds an element to the hash table.
 * @key: key
 * @value: value of the key
 * @ht: table
 * Return: element of the table.
*/

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *pt_newnode;

	if (ht == NULL)
		return (0);

	pt_newnode = new_node(ht, key, value);
	if (pt_newnode == NULL)
		return (0);

	if (pt_newnode->key == NULL)
		return (0);
	if (pt_newnode->value == NULL)
		return (0);
	pt_newnode->next = NULL;
	return (1);
}
