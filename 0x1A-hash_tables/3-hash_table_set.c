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
	hash_node_t *pt_newnode, *head;
	unsigned long int index = 0;

	if (ht == NULL)
		return (0);

	pt_newnode = malloc(sizeof(hash_node_t));
	if (pt_newnode != NULL)
		return (0);

	index = key_index((const unsigned char *)key, ht->size);

	pt_newnode->key = malloc(strlen(key) + 1);
	pt_newnode->key = strcpy(pt_newnode->key, key);
	pt_newnode->value = malloc(strlen(value) + 1);
	pt_newnode->value = strcpy(pt_newnode->value, value);
	pt_newnode->next = NULL;


	head = *(ht->array + index);
	pt_newnode->next = head;
	head = pt_newnode;

	return (1);

}
