#include "hash_tables.h"

/**
 * NUM - insert node or update node
 * @head: pointer to address of hash table
 * @node: new node passed from function
 * @key: copy of key
 * @value: copy of key
 * Return: something
 */

int NUM(hash_node_t **head, hash_node_t *node, char *key, char *value)
{
	hash_node_t *ptr1 = (*head);

	while (ptr1 != NULL)
	{
		if ((strcmp(ptr1->key, key)) == 0)
		{
			free(ptr1->value), free(key), ptr1->value = value;
			return (0);
		}
		ptr1 = ptr1->next;
	}
	ptr1 = (*head), (*head) = node, node->next = ptr1;

	return (0);
}

/**
 * better_strcpy - a terribly strcpy
 * @str_ptr: incoming string
 * Return: pointer to string
 */

char *better_strcpy(const char *str_ptr)
{
	char *ptr;
	unsigned int idx = 0, x = strlen(str_ptr) + 1;

	ptr = calloc(x + 1, sizeof(char));
	if (ptr == NULL)
		return (NULL);

	while (idx < x)
		ptr[idx] = str_ptr[idx], idx++;
	ptr[idx] = '\0';

	return (ptr);
}

/**
 * hash_table_set - add an element to a hash table
 * @ht: pointer to hashtable
 * @key: key string
 * @value: value string
 * Return: 1 on success, 0 on failure
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int table_index;
	hash_node_t *new_node;
	char *key_cpy, *value_cpy;

	if (key == '\0' || key == NULL || value == NULL || ht == NULL)
		return (0);

	table_index = key_index((const unsigned char *)key, ht->size);
	new_node = calloc(1, sizeof(hash_node_t));
	if (new_node == NULL)
		return (0);

	key_cpy = better_strcpy(key);
	if (key_cpy == NULL)
	{
		free(new_node);
		return (0);
	}
	value_cpy = better_strcpy(value);
	if (value_cpy == NULL)
	{
		free(key_cpy), free(new_node);
		return (0);
	}
	new_node->key = key_cpy, new_node->value = value_cpy;
	new_node->next = NULL;

	if (ht->array[table_index] == NULL)
		ht->array[table_index] = new_node;
	else
		NUM(&ht->array[table_index], new_node, key_cpy, value_cpy);

	return (1);
}
