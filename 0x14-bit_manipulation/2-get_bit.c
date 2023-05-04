#include "main.h"
/**
 * get_bit - a function that returns the value of a bit at a given index
 * @n: unsigned long int
 * @index: unsigned int starting from 0 of the bit you want to get
 *
 * Return: the value of a bit at a given index
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int i = 1;

	if (index > sizeof(n) * 8)
	{
		return (-1);
	}

	i <<= index;

	if (i & n)
		return (1);
	else
		return (0);
}
