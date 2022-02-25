#include <string.h>
#include <stdio.h>
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
	if (argc == 1)
	{
		printf("%s\n", argv[0]);
	}
return (0);
}
