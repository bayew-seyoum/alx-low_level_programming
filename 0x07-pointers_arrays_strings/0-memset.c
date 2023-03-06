#include "main.h"
/**
 * _memset -a function that fills memory with a constant byte.
 * @s: pointer to b
 * @b: constant char variable
 * @n: the size of memory to fill
 * Return: pointer s
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i;

	for (i = 0; i < n; i++)
		s[i] = b;
	return (s);
}
