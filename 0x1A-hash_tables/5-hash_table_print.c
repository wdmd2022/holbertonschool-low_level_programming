#include "hash_tables.h"

/**
 * hash_table_print - prints key/value pairs in order that they
 * appear in the array of hash table (if ht is NULL, don't print)
 * @ht: the hash table you want to print from
 * Return: nothing
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int index = 0;
	int format = 1;
	hash_node_t *surfer;

	if (ht == NULL)
		return;
	if (ht->array == NULL)
		return;
	printf("{"); /* opening bracket per format guide */
	for (; index < ht->size; index++)
	{
		surfer = ht->array[index];
		while (surfer)
		{
			if (format == 0)
				printf(", ");
			printf("'%s': '%'", surfer->key, surfer->value);
			format = 0;
			surfer = surfer->next;
		}
	}
	printf("}");
	putchar(10);
}
