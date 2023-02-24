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

	unsigned long i = 1, i1, i2;
	unsigned long j = i + 1, j1, j2;
	unsigned long k = i + j, k1, k2;

	printf("%lu", i);
	printf(", ");
	printf("%lu", j);
	printf(", ");
	while (counter < 93)
	{
		counter++;
		printf("%lu", k);
		i = j;
		j = k;
		k = i + j;
		if (counter < 93)
		{
			printf(", ");
		}
	}

	i1 = i / 10000000000;
	i2 = i % 10000000000;
	j1 = j / 10000000000;
	j2 = j % 10000000000;
	while (counter >= 93 && counter < 98)
        {
		counter++;
		k1 = i1 + j1;
		k2 = i2 + j2;
		if (k2 > 9999999999)
		{
			k1 = k1 + 1;
			k2 = k2 % 10000000000;
		}
		printf("%lu%lu", k1, k2);
		i1 = j1;
		i2 = j2;
		j1 = k1;
		j2 = k2;
		if (counter < 98)
		{
			printf(", ")
		}
	}
	printf("\n");
	return (0);
}
