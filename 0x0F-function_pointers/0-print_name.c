#include "function_pointers.h"
/**
 * print_name - writes the character c to stdout
 * @name: The character to print
 * @f: function
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
void print_name(char *name, void (*f)(char *))
{
	f(name);
}
