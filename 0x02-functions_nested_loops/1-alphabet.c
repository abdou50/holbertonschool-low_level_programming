#include <unistd.h>
#include "main.h"

/**
 * print_alphabet - writes the character c to stdout
 */
void print_alphabet(void)
{
	int a;

	for (a = 'a'; a <= 'z'; a++)
	{
		_putchar (a);
	}
	_putchar('\n');
}
