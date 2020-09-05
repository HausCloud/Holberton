#include "hash_tables.h"

/**
 * hash_table_print - print out a hash table
 * @ht: incoming hash table
 * Return: nothing
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int count = 0, end;
	hash_node_t *ptr;

	if (ht == NULL)
		return;
	end = (ht->size) - 1;
	printf("{");

	while (ht->array[end] == NULL)
		end--;
	while (count < ht->size)
	{
		ptr = ht->array[count];

		if (ptr == NULL)
		{
			count++;
			continue;
		}
		else
		{
			while (ptr != NULL)
			{
				if (ptr->next == NULL && count == end)
				{
					printf("'%s': '%s'", ptr->key, ptr->value);
					break;
				}
				else
					printf("'%s': '%s', ", ptr->key, ptr->value);
				ptr = ptr->next;

			}
		}
		count++;
	}

	printf("}\n");
}
