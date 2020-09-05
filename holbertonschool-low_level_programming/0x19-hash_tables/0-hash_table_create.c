#include "hash_tables.h"

/**
 * hash_table_create - creates a hash table
 * @size: size array should be
 * Return: pointer to newly created hash table and NULL on failure
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *hashbrown;
/*	hash_node_t **node;*/

	hashbrown = calloc(1, sizeof(hash_table_t));
	if (hashbrown == NULL)
		return (NULL);

	hashbrown->size = size;

	hashbrown->array = calloc(size, sizeof(hash_node_t *));
	if (hashbrown->array == NULL)
		return (NULL);

	return (hashbrown);
}
