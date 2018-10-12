#include "hash_tables.h"
/**
 * hash_table_delete - detele a hash table
 * @ht: hash table
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int idx = 0;
	hash_node_t  *tmp = NULL, *cur = NULL;

	if (!ht)
		return;
	while (idx < ht->size)
	{
		tmp = ht->array[idx];
		cur = tmp;
		while (tmp != NULL)
		{
			free(tmp->value);
			free(tmp->key);
			cur = cur->next;
			free(tmp);
			tmp = cur;
		}
		tmp = NULL;
		idx++;
	}
	free(ht->array);
	free(ht);
}
