#include "main.h"
/**
 * print_line -function that draws a straight line
 * i : variable
 * @n: integer to print stuff?
 */
void print_line(int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		_putchar('_');
	}
	_putchar('\n');
}
