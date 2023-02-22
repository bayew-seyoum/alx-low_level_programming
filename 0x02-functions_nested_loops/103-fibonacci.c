#include <stdio.h>
/**
 * main - prints the sum of the even-valued in the Fibonacci sequence
 *i, j, k, counter: variable
 * Return: nothing
 */
int main(void)
{
	int counter = 0;
	long int i = 1;
	long int j = a;
	long int k = i + j;

	while (k < 4000000)
	{
		if (k % 2 == 0)
		{
			counter += k;
		}
		i = j;
		j = k;
		k = i + j;
	}
	printf("%d\n", counter);
	return (0);
}
