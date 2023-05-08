#include "main.h"
/**
 * read_textfile - a function that reads a text file and prints it to the
 * _POSIX standard output
 * @filename: filename
 * @letters: the number of letters it should read and printed
 *
 * Return: actual number of letters it could read and printed.
 * _if the file can not be opened or read or Null, returns 0
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int i;
	ssize_t r, w;
	char *b;

	if (!filename)
		return (0);

	i = open(filename, O_RDONLY);

	if (i == -1)
		return (0);

	b = malloc(sizeof(char) * (letters));
	if (!b)
		return (0);

	r = read(i, b, letters);
	w = write(STDOUT_FILENO, b, r);

	close(i);
	free(b);
	return (w);
}
