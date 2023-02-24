#include <stdio.h>
/**
 * main - prints the first 98 Fibonacci numbers
 * i, j, k, counter: variable
 *
 * Return: nothing
 */
int main(void)
{
	int counter = 2;

	unsigned long i = 1;
	unsigned long j = i + 1;
	unsigned long k = i + j;

	printf("%lu", i);
	printf(", ");
	printf("%lu", j);
	printf(", ");
	while (counter < 98)
	{
		counter++;
		printf("%lu", k);
		i = j;
		j = k;
		k = i + j;
		if (counter < 98)
		{
			printf(", ");
		}
	}
	printf("\n");
	return (0);
}
