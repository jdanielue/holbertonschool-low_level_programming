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

/**
 * new_node -  function that adds an element to the hash table.
 * @key: key
 * @value: value of the key
 * @ht: table
 * Return: element of the table.
*/

hash_node_t *new_node(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *pt_newnode, *head, *temp;
	unsigned long int index = 0;

	pt_newnode = malloc(sizeof(hash_node_t));

	index = key_index((const unsigned char *)key, ht->size);
	head = *(ht->array + index);
	temp = head;

	while (head)
	{
		if (!strcmp(key, head->key))
		{
			free(head->value);
			head->value = strdup(value);
			return (pt_newnode);
		}
		head = head->next;
	}
	pt_newnode->key = strdup(key);
	pt_newnode->value = strdup(value);
	pt_newnode->next = NULL;
	pt_newnode->next = temp;
	temp = pt_newnode;

	return (pt_newnode);
}
