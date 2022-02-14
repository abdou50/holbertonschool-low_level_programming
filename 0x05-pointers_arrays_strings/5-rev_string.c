#include "main.h"
#include <string.h>
/**
* rev_string  - writes the character c to stdout
 * @s: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
void rev_string(char *s)
{
	int i;
	int k;
	int n = 0;
	int j;
	char array[1200];

	for (k = 0; s[k] != '\0'; k++)
	{
		n++;
	}
	j = 0;
	i = n - 1;
	while (i >= 0)
	{
		array[j] = s[i];
			i--;
			j++;
	}
	s = array;

}
