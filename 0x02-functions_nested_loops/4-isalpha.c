#include <stdio.h>
#include "main.h"
/**
 *_isalpha - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1
 */
	int _isalpha(int c)
{
	if ((c <= 97 || c >= 122) && (c <= 65 || c >= 90))
	{
	return (0);
	}
	else
	{
	return (1);
	}
}
