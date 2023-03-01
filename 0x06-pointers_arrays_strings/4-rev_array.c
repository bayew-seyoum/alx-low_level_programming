#include "main.h"
/**
 * reverse_array - a function that reverses the content of an array of integers
 * @a: arry of integer
 * @n: the number of elements to swap
 */
void reverse_array(int *a, int n)
{
	int i;
	int j;

	for (i = 0; i < n / 2; i++)
	{
		j = a[i];
		a[i] = a[n - i - 1];
		a[n - i - 1] = j;
	}
}

