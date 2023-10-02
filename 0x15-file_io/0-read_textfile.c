#include "main.h"

/**
 * read_textfile - read_textfile
 * @filename: filename
 * @letters: letters
 * Return: return
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int f, i, r;
	char *b;

	if (filename == NULL)
	{
		return (0);
	}

	b = malloc(sizeof(char) * letters);

	if (b == NULL)
		return (0);
	f = open(filename, O_RDONLY);
	if (f == -1)
	{
	free(b);
	return (0);
	}
	r = read(f, b, letters);
	if (r == -1)
	{
		close(f);
		free(b);
		return (0);
	}
	for (i = 0; i < r; i++)
	{
	if (write(STDOUT_FILENO, &b[i], 1) == -1)
	{
	close(f);
	free(b);
	return (0);
	}
	}
	close(f);
	free(b);
	return (r);

}
