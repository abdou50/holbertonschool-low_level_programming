#include "dog.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * free_dog - writes the character c to stdout
 * @d: The character to print
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
void free_dog(dog_t *d)
{
	if (d == NULL)
		return;
	free((*d).owner);
	free((*d).name);
	free(d);
}
