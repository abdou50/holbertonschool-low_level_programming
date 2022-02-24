#include "main.h"
/**
 * hichem - writes the character c to stdout
 * @s: The character to print
 * @j :length of string
 * @i : compteur
 * 
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int hichem(char *s, int j, int i)
{
	if (s[i] != s[j])
		return (0);
	if (s[i] == s[j] && i == j)
		return (1);
	return (hichem(s, j - 1, i + 1));
}
/**
 * _is_palindome - writes the character c to stdout
 * @s: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int is_palindrome(char *s)
{
	return (hichem(s, strlen(s) - 1, 0));
}

