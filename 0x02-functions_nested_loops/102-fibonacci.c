#include <stdio.h>
/**
 * main - prints the first 50 Fibonacci numbers, starting with 1 and 2
 * i, j, k, counter: variable
 *
 * Return: nothing
 */
int main(void)
{
	int counter = 2;
	long int i = 1;
	long int j = i + 1;
	long int k = i + j;

	printf("%ld, %ld, ", i, j);
	while (counter < 50)
	{
		printf("%ld", k);
		counter++;
		i = j;
		j = k;
		k = i + j;
		if (counter < 50)
		{
			printf(", ");
		}
	}
	printf("\n");
	return (0);
}
