#include "hash_tables.h"

/**
 * hash_table_delete - delete an entire hash table
 * @ht: incoming hash table
 * Return: nothing
 */
void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *ptr1, *ptr2;
	unsigned long int count = 0;

	if (ht == NULL)
		return;

	while (count < ht->size)
	{
		if (ht->array[count] == NULL)
		{
			count++;
			continue;
		}
		else
		{
			ptr1 = ht->array[count], ptr2 = ptr1;
			while (ptr1 != NULL)
			{
				ptr1 = ptr1->next;
				free(ptr2->key), free(ptr2->value), free(ptr2);
				if (ptr1 == NULL)
					break;
				ptr2 = ptr1;
			}
		}
		count++;
	}
	free(ht->array);
	free(ht);
}
