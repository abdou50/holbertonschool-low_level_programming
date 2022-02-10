#include "main.h"
/**
 * print_triangle - writes the character c to stdout
 * @size:integer
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
void print_triangle(int size)
{
int x, y, j, i, k;
if (size > 0)
{
x = 1;
y = size - 1;
for (k = 0; k < size; k++)
{
for (i = y; i > 0; i--)
{
_putchar(' ');
}
for (j = 0; j < x; j++)
{
_putchar('#');
}
_putchar('\n');
x++;
y--;
}
}
else
{
_putchar('\n');
}
}
