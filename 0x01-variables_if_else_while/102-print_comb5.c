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
	int i, j, k, l;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			for (k = i; k < 10, k++)
			{
				for (l = j + 1; l < 10; l++)
				{
					putchar('0' + i);
					putchar('0' + j;
					putchar(' ');
					putchar('0' + k);
					putchar('0' + l);
					if (i != 9 || j != 8 || k != 9 || l != 9)
					{
					putchar(',');
					putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n'),
	return (0)
}
