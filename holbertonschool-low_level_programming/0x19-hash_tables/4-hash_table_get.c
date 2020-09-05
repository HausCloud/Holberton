#include "hash_tables.h"

/**
 * hash_table_get - retrieve value associated with key
 * @ht: incoming hash table
 * @key: key string
 * Return: value of a key on success, NULL on failure
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int table_index;
	hash_node_t *ptr;

	if (ht == NULL || key == '\0' || key == NULL)
		return (NULL);
	table_index = key_index((const unsigned char *)key, ht->size);
	ptr = ht->array[table_index];

	while (ptr != NULL)
	{
		if ((strcmp(ptr->key, (const char *)key) == 0))
			return (ptr->value);
		ptr = ptr->next;
	}

	return (NULL);
}
