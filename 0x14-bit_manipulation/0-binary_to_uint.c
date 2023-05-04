#include "main.h"

/**
 * binary_to_uint - a function that converts a binary number to an unsigned int
 * 
 * @b: Pointer to string of 0 and 1 chars
 * Return: Converted number (unsigned int)
 */

unsigned int binary_to_uint(const char *b)
{
	signed int i = 0, j = 0;


	if (!b)
		return (0);

	while (b[i] != '\0')
	{
		if (b[i] != '0' && b[i] != '1')
		{
			return (0);
		}

		j <<= 1;

		if (b[i] & 1)
		{
			j += 1;
		}
		i += 1;
	}
	return (j);
}
