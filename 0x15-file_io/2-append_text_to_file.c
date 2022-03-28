#include "main.h"
/**
 *append_text_to_file- is a function that append in the last of the file
 *
 * @filename: is the file name
 * @text_content: the content of the string to print
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int k;

	if (filename == NULL)
		return (-1);
	k = open(filename, O_RDWR | O_APPEND);
	if (k == -1)
		return (-1);
	if (text_content != NULL)
	write(k, text_content, strlen(text_content));
	close(k);
	return (1);
}
