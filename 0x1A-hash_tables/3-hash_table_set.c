#include "hash_tables.h"

/**
 * hash_table_set - adds an element to a hash table. In case of collision,
 * add the new node at the beginning of the list.
 * @ht: pointer to the hash table you want to add or update the key/value to
 * @key: constant char pointer (string), i.e., the key. Can't be empty string
 * @value: pointer to constant char (string): the value associated with the key
 * value must be duplicated and CAN be an empty string
 * Return: 1 if succeeded, 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	char *valuecopy;
	hash_node_t *newnode = NULL, *tempeh = NULL;

	if (!key || !ht || *key == '\0')
		return (0);

	valuecopy = strdup(value);
	if (valuecopy == NULL)
		return (0);

	index = key_index((const unsigned char *)key, ht->size);
	
	tempeh = ht->array[index];
	if (tempeh && strcmp(key, tempeh->key) == 0)
	{
		free(tempeh->value);
		tempeh->value = valuecopy;
		return (1);
	}
	newnode = malloc(sizeof(hash_node_t));
	if (!newnode)
		return (0);
	newnode->value = strdup(value);
	newnode->key = strdup(key);
	newnode->next = ht->array[index];
	ht->array[index] = newnode;
	return (1);
}
