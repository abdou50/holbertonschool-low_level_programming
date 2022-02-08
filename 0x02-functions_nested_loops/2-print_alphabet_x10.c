#include <stdio.h>
#include "main.h"
/**
 *print_alphabet_x10 - writes the character c to stdout
 */
void print_alphabet_x10(void)
{
	int i;
	char k;

	for (i = 1 ; i <= 10 ; i++)
	{
	for (k = 'a'; k <= 'z' ; k++)
	{
	_putchar(k);
	}
	_putchar('\n');
	}
}
