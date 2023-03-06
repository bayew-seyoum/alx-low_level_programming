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

	while (s[j])
	{
		j++;
	}
	for (i =  0; i < j; i++)
	{
		if (s[i] == c)
		{
			s += i;
			return (s);
		}

	}
	return ('\0')
}
