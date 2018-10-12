#include "hash_tables.h"
/**
 * key_index -  gives you the index of a key
 * @key: key
 * @size: the size of the array of the hash table
 * Return: return the index of a key
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int index, value;

	value = hash_djb2(key);
	index = value % size;
	return (index);
}
