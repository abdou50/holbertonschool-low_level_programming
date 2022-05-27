#include "hash_tables.h"
/**
 * hash_table_create- check the code for
 * @size: the size of array
 * Return: Always EXIT_SUCCESS.
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *ptr;

	ptr = malloc(sizeof(hash_table_t));
	if (ptr == NULL)
		return (NULL);
	ptr->size = size;
	ptr->array = malloc(sizeof(unsigned long int) * size);
	return (ptr);
}
