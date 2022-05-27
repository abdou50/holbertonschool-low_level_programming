#include "hash_tables.h"
/**
 * key_index- check the code for
 * @size: the size of array
 * @key: the key
 * Return: Always EXIT_SUCCESS.
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int h = hash_djb2(key);

	return (h % size);
}
