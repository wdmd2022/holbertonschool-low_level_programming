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
	hash_node_t *newnode, *tempeh;

	if (!key || !ht || *key == '\0')
		return (0);

	valuecopy = strdup(value);
	if (value_copy == NULL)
		return (0);

	index = key_index((const unsigned char *)key, ht->size);
	
	if (ht->array[index])
	{
		tempeh = ht->array[index];
		while (tempeh)
		{


	if (!ht->*array[index]) /* make the node if there isn't one yet */
	{
		ht->*array[index] = malloc(sizeof(hash_node_t));
		if (!ht->*array[index])
		{
			free(valuecopy);
			return (0);
		}
		ht->*array[index]->key = strdup(key);
		if (!ht->*array[index]->key)
		{
			free(valuecopy);
			free(newnode);
			return (0);
		ht->*array[index]->value = valuecopy;
		ht->*array[index]->next = NULL;
	}
	if (ht->*array[index]) /* make it in the front if there is one already */
	{
		tempnode = malloc(sizeof(hash_node_t));
		tempnode->


}
