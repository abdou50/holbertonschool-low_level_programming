#ifndef DOG_H
#define DOG_H
/**
 *struct dog- writes the character c to stdout
 * @name: The character to print
 * @age: age
 * @owner: owner
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
typedef struct dog dog_t;
dog_t *new_dog(char *name, float age, char *owner);
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
void free_dog(dog_t *d);
#endif
