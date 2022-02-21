#include "main.h"
/**
 * _strspn - writes the character c to stdout
 * @s: The character to print
 * @accept: string
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
unsigned int _strspn(char *s, char *accept)
{
	int i, j;
	int k = strlen(s);
	int sum = 0;

	for (i = 0; i < k; i++)
	{
		j = 0;
		while (s[i] != accept[j] && accept[j] != '\0')
		{
			j++;
		}
		if (s[i] == accept[j])
		{
			sum += 1;
		}
		else 
		{
			i = k;
			j = strlen(accept);
		}
	}
	return (sum);
}
