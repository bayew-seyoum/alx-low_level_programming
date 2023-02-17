#include <stdio.h>
/**
 * main -prints all possible combinations of two two-digit numbers.
 * i: single digit variable number
 * j: single digit variable number
 * k: single digit variable number
 * l: single digit variable number
 * Return: return zero
 */
int main(void)
{
	int i, j;

	for (i = 0; i < 100; i++)
	{
		for (j = i + 1; j < 100; j++)
		{
			putchar('0' + i / 10);
			putchar('0' + i % 10);
			putchar(' ');
			putchar('0' + j / 10);
			putchar('0' + j % 10);
			if (i != 98 || j != 99)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
