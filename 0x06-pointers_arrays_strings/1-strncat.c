#include "main.h"
/**
 * _strncat - a function that concatenates two strings.
 * it will use at most n bytes from src; and
 * src does not need to be null-terminated if it contains n or more bytes
 * @dest: destination string
 * @src: source string
 * @n: the amout of char to copy
 * Return: destination character strin
 */
char *_strncat(char *dest, char *src, int n)
{
	int i;
	int j;

	for (i = 0; dest[i] != '\0'; i++)
	{}

	for (j = 0; j < n && src[j] != '\0'; j++)
	{
		dest[i + j] = src[j];
	}
	dest[i + j] = '\0';

	return (dest);

}
