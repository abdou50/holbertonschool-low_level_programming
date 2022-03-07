#include "dog.h"
#include <stdlib.h>
#include <string.h>
/**
 * new_dog - writes the character c to stdout
 * @name: The character to print
 * @age: age of the dog
 * @owner: owner
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *file;
	int k, l;

	if (name == NULL || owner == NULL || age < 0)
		return (NULL);
	file = malloc(sizeof(dog_t));
	if (file == NULL)
		return (NULL);
	k = strlen(name);
	(*file).name = malloc(sizeof(char) * (k + 1));
	if ((*file).name == NULL)
	{
		free(file);
		return (NULL);
	}
	l = strlen(owner);
	(*file).owner = malloc(sizeof(char) * (l + 1));
	if ((*file).owner == NULL)
	{
		free((*file).name);
		free(file);
		return (NULL);
	}
	(*file).name = strcpy((*file).name, name);
	(*file).age = age;
	(*file).owner = strcpy((*file).owner, owner);
	return (file);

}
