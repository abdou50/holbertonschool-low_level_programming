#include <stdio.h>
#include "main.h"
/**
 *_isdigit - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
		return (0);
}
