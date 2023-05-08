#include "main.h"

/**
 * create_file - a function that creates a file
 * @filename: the name of the file to be created
 * @text_content: string content writed in the file.
 *
 * Return: 1 on success, -1 on failure (file can not be created, file
 * _ can not be written, write “fails”, etc…)
 */
int create_file(const char *filename, char *text_content)
{
	int i;
	int nl;
	int w;

	if (!filename)
		return (-1);

	i = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (i == -1)
		return (-1);

	if (!text_content)
		text_content = "";

	for (nl = 0; text_content[nl]; nl++)
		;

	w = write(i, text_content, nl);

	if (w == -1)
		return (-1);

	close(i);

	return (1);
}
