#include "hash_tables.h"

/**
 * hash_table_get - retrieves a value associated with a key
 * @key: the key you are looking for
 * @ht: the hash table you want to look into
 * Return: the value associated with the element, or NULL if key
 * couldn't be found
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index = 0;
	hash_node_t *treasure = NULL;

	if (ht == NULL || key == NULL || strlen(key) == 0)
		return (NULL);
	if (ht->size == 0 || ht->array == NULL)
		return (NULL);
	index = key_index((const unsigned char *)key, ht->size);
	treasure = ht->array[index];
	while (treasure)
	{
		if (strcmp(treasure->key, key) == 0)
			return (treasure->value);
		treasure = treasure->next;
	}
	return (NULL);
}
