#include "hash_tables.h"
/**
 * hash_table_print - print hash table
 * @ht: hash table
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int idx = 0, flag_format = 0;
	hash_node_t  *tmp = NULL;

	if (!ht)
		return;
	printf("{");
	while (idx < ht->size)
	{
		tmp = ht->array[idx];
		while (tmp != NULL)
		{
			if (flag_format == 0)
			{
				printf("'%s': '%s'", tmp->key, tmp->value);
				flag_format = 1;
			}
			else
				printf(", '%s': '%s'", tmp->key, tmp->value);
			tmp = tmp->next;
		}
		idx++;
	}
	printf("}\n");
}
