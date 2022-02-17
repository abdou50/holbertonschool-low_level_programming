#include "main.h"
#include <string.h>
/**
 * *string_toupper - writes the character c to stdout
 * @l: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
char *string_toupper(char *l)
{
	int i = 0;
	int k = 0;

	k = strlen(l);
	for (i = 0; i < k ; i++)
	{
		if (l[i] >= 'a' && l[i] <= 'z')
		{
			l[i] = l[i] - 32;
		}
	}
return (l);
}
