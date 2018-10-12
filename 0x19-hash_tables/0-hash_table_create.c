#include "hash_tables.h"
/**
 * hash_table_create - creates a hash table.
 * @size: size of the array
 * Return: Returns a pointer to the newly created hash table
 * return NULL when something went wrong
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *hash = NULL;

	if (size == 0)
		return (NULL);
	hash = malloc(sizeof(hash_table_t));
	if (hash == NULL)
		return (NULL);
	hash->size = size;
	hash->array = malloc(sizeof(hash_node_t *) * size);
	if (hash->array == NULL)
		return (NULL);
	while (size != 0)
	{
		size--;
		hash->array[size] = NULL;
	}
	return (hash);
}
