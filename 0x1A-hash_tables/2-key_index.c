#include "hash_tables.h"

/**
 * key_index - The key index of the current item
 * @key: This is the key to get the index of the curret item.
 * @size: Size of the array item of the hash table.
 *
 * Return: Return the index of the key.
 *
 * Description: This uses the djb2 algorithm.
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
