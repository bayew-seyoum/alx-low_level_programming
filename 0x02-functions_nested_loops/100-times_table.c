#include "main.h"

/**
 * print_times_table -  prints the n times table, starting with 0.
 * @n: integer to return
 * i, j, k: variable
 *
 */
void print_times_table(int n)
{
	int i, j, k;

	if (n <= 15 && n >= 0)
	{
		for (i = 0; i <= n; i++)
		{
			for (j = 0; j <= n; j++)
			{
				k = j * i;

				if (j == 0)
				{
					_putchar('0');
				} else if (k <= 9)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar(' ');
					_putchar('0' + k);
				} else if (k > 99)
				{
					_putchar(',');
					_putchar(' ');
					_putchar('0' + (k / 100));
					_putchar('0' + ((k / 10) % 10));
					_putchar('0' + (k % 10));
				} else
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar('0' + (k / 10));
					_putchar('0' + (k % 10));
				}
			}
			_putchar('\n');
		}
	}
}
