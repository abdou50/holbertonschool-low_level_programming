#include <stdio.h>
#include <stdlib.h>
/**
 * main - writes the character c to stdout
 * @argc: count arguments
 * @argv: string
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int main(int argc, char *argv[])
{
int i, l;
int j = 0;
int tab[] = {25, 10, 5, 2, 1};

if (argc != 2)
{
printf("Error\n");
return (1);
}
l = atoi(argv[1]);
if (l < 0)
{
printf("0\n");
}
for (i = 0; i < 5; i++)
{
if (l >= tab[i])
{
j += (l / tab[i]);
l = l % tab[i];
}
if (l == 0)
{
printf("%d\n", j);
i = 5;
}
}
return (0);
}
