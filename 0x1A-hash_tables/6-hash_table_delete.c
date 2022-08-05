#include "hash_tables.h"

/**
 * hash_table_delete - deletes a hash table
 * @ht: the hash table you want to destroy
 * Return: nothing, no survivors
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int index = 0;
	hash_node_t *reaper;

	/* let's make sure this target exists */
	if (ht == NULL || ht->size == 0 || ht->array == NULL)
		return;
	for (; index < ht->size; index++)
	{
		while (ht->array[index])
		{
			reaper = ht->array[index]->next;
			free(ht->array[index]->value);
			free(ht->array[index]->key);
			free(ht->array[index]);
			ht->array[index] = reaper;
		}
	}
	free(ht->array);
	ht->size = 0;
	ht->array = NULL;
	free(ht);
}
