#include "main.h"
/**
 * _strchr -a function that locates a character in a string.
 * @s: string variable
 * @c: char variable
 * Return: pointer of s[i] = c
 */
char *_strchr(char *s, char c)
{
	unsigned int i, j;

	while (s[i])
	{
		i++;
	}
	for (j =  0; j <= i; j++)
	{
		if (s[j] == c)
		{
			s += j;
			return (s);
		}

	}
	return ('\0')
}
