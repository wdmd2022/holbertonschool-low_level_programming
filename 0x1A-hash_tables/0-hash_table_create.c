#include "hash_tables.h"

/**
 * hash_table_create - create a hash table
 * @size: unsigned long int, the size of the array
 * Return: a pointer to the newly-created hash table, or NULL if creation fails
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	unsigned long int i;
	hash_table_t *my_table; /* points to a hash table */

	my_table = malloc(sizeof(hash_table_t)); /* make space for the hash table */
	if (!my_table)
		return (NULL); /* return NULL if malloc fails to create the table */
	my_table->size = size; /* set size of the hash table */
	my_table->array = malloc(sizeof(hash_node_t *) * size);
	if (!my_table->array)
		return (NULL);
	for (i = 0; i < size; i++)
	{
		my_table->array[i] = NULL;
	}
	return (my_table);
}
