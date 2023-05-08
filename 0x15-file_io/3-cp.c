#include "main.h"
#include <stdio.h>
/**
 * error_file - a program that checks if files can be opened
 * @f_f: file_from
 * @f_t: file_to
 * @argv: arguments vector
 * Return: Nothing
 */
void error_file(int f_f, int f_t, char *argv[])
{
	if (f_f == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	if (f_t == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
}

/**
 * main - a program that copies the content of a file to another file
 * @argc: number of arguments.
 * @argv: arguments vector.
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	int f_f, f_t, e_c;
	ssize_t nc, w;
	char b[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "%s\n", "Usage: cp f_f f_t");
		exit(97);
	}

	f_f = open(argv[1], O_RDONLY);
	f_t = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC | O_APPEND, 0664);
	error_file(f_f, f_t, argv);

	nc = 1024;
	while (nc == 1024)
	{
		nc = read(f_f, b, 1024);
		if (nc == -1)
			error_file(-1, 0, argv);
		w = write(f_t, b, nc);
		if (w == -1)
			error_file(0, -1, argv);
	}

	e_c = close(f_f);
	if (e_c == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", f_f);
		exit(100);
	}

	e_c = close(f_t);
	if (e_c == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", f_f);
		exit(100);
	}
	return (0);
}
