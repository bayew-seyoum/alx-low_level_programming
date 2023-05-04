#include "main.h"
/**
 * flip_bits -  a function that returns the number of bits you would need to 
 * _flip to get from one number to another
 * @n: unsigned long int
 * @m: unsigned long int
 *
 * Return: 1 if works -1 on failure
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int i = 0, index;

	index = n ^ m;
	while (index > 0)
	{
		if (index & 1)
		{
			i++;
		}
		index >>= 1;
	}
	return (i);
}
