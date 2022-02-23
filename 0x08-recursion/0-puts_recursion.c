#include "main.h"
/**
 * _puts_recursion - writes the character c to stdout
 * @s: The character to print
 *
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
	_putchar('\n');
	}
	else
	{
	_putchar(*s);
	_puts_recursion(s + 1);
	}
}
