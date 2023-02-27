#include "main.h"
#include <stdio.h>
/**
 * print_array -prints n elements of an array of integers
 *
 * @a: an arry to print
 * @n: the size of an arry a
 * Return : zero
 */
void print_array(int *a, int n) 
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);
		if (i != n - 1)
			printf(", ");
	}
	printf('\n');
}
