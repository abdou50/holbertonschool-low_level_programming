#include "main.h"
/**
 *create_file- is a functio to create a new file with diffrent things
 *
 *@filename: is the file name
 *@text_content: is the content of  string to be printed
 *Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 *
 */
int create_file(const char *filename, char *text_content)
{
	int k;

	if (filename == NULL)
		return (-1);
	k = open(filename, O_RDWR | O_CREAT | O_TRUNC, 0600);
	if (k == -1)
		return (-1);
	if (text_content != NULL)
	write(k, text_content, strlen(text_content));
	close(k);
	return (1);
}
