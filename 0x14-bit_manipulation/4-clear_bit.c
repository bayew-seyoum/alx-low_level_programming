#include "main.h"
/**
 * clear_bit - a function that sets the value of a bit to 0 at a given index
 * @n: unsigned long int
 * @index: unsigned int
 *
 * Return: 1 if it worked, or -1 if an error occurred
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int j = 1 << index;

		if (index < sizeof(n) * 8)
		{
			*n = (*n & ~j);
			return (1);
		}

		return (-1);
}
