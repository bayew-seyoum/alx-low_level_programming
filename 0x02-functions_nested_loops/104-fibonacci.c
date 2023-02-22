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

	float i = 1;
	float j = i + 1;
	float k = i + j;

	printf("%.0f", i);
	printf("%.0f", j);
	while (counter < 98)
	{
		counter++;
		printf("%.0f", k);
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
