#include <stdio.h>
/**
 * main - prints the largest prime factor
 * i, j: variable
 *
 * Return: returns 0
 */
int main(void)
{
	unsigned int i = 2;
	unsigned long j = 612852475143;

	while (i != j)
	{
		if (j % a == 0)
		{
			j = j / i;
		} else
		{
			i++;
		}
	}
	printf("%lu\n", j);
	return (0);
}
