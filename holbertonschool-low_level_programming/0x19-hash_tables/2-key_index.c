#include "hash_tables.h"

/**
 * key_index - function to find the index of a key
 * @key: incoming string
 * @size: length of hash table
 * Return: index of key
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return ((hash_djb2(key) % size));
}
