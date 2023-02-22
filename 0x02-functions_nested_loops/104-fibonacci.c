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

	putchar('0' + i);
	putchar('0' + j);
	while (counter < 98)
	{
		counter++;
		putchar('0' + k);
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
