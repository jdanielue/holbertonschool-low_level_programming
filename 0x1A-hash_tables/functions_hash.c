#include "hash_tables.h"
/**
 * new_node -  function that adds an element to the hash table.
 * @key: key
 * @value: value of the key
 * @ht: table
 * Return: element of the table.
*/

hash_node_t *new_node(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *pt_newnode;
	unsigned long int index = 0;

	pt_newnode = malloc(sizeof(hash_node_t));

	index = key_index((const unsigned char *)key, ht->size);

	pt_newnode->key = strdup(key);
	pt_newnode->value = strdup(value);
	pt_newnode->next = NULL;
	pt_newnode->next = *(ht->array + index);
	*(ht->array + index) = pt_newnode;

	return (pt_newnode);
}
