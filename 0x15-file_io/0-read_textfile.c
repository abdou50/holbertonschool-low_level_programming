#include "main.h"
/**
 * read_textfile- is to read and print the text in a specific file
 *
 * @filename:  the name of the file
 * @letters: size of letters
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int file, k;
	char *buffer = malloc(letters);

	if (filename == NULL)
		return (0);
	if (buffer == NULL)
		return (0);
	file = open(filename, O_RDONLY, 0600);
	if (file == -1)
		return (0);
	k = read(file, buffer, letters);
	write(STDOUT_FILENO, buffer, k);
	free(buffer);
	close(file);
	return (k);
}
