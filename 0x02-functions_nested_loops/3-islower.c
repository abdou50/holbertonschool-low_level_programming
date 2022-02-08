#include <stdio.h>
#include "main.h"
/**
 * _islower - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1
 */
	int _islower(int c)

{
	if (c <= 97 || c >= 122)
	{
		return (0);
	}
	else
	{
		return (1);
	}
	}
