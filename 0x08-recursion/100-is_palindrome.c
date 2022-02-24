#include "main.h"
/**
 * hichem - writes the character c to stdout
 * @s: The character to print
 * @j :length of string
 * @i : compteur
 * @l : middle
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int hichem(char *s, int j, int l, int i)
{
	if (j == 0)
		return (0);
	if (s[i] != s[j])
		return (0);
	if (s[i] == s[j] && (i == j || j - 1 == i))
		return (1);
	return (hichem(s, j - 1, l, i + 1));
}
/**
 * is_palindrome - writes the character c to stdout
 * @s: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int is_palindrome(char *s)
{
	return (hichem(s, strlen(s) - 1, strlen(s) / 2, 0));
}
