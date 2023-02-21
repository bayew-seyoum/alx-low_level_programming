#include "main.h"
/**
 * times_table - a function that prints the 9 times table, starting with 0.
 *i,j: variable
 */
void times_table(void)
{
	int i, j;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			int k = j * i;

			if (j == 0)
			{
				_putchar('0');
			} else if (k <= 9)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar(k + '0');
			} else
			{
				_putchar(',');
				_putchar(' ');
				_putchar(k / 10 + '0');
				_putchar(k % 10 + '0');
			}
		}
		_putchar('\n');
	}
}
