#include "hash_tables.h"

/**
 * key_index- Function that return the index for a key
 * @key: key
 * @size: size of array
 * Return: index of the array
 */


unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int index;

	index = *key % size;
	return (index);
}
