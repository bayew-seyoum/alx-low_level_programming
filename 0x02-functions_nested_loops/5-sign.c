#include "main.h"
/**
 * print_sign - a function that prints the sign of a number.
 *
 * @x: number to compare
 *
 * Return: 1 if positive, 0 if zero, -1 if negative
 *
 */

int print_sign(int x)
{
	if (x > 0)
	{
		_putchar('+');
		return (1);
	}
	if (x == 0)
	{
		_putchar('0');
		return (0);
	}
	_putchar('-');
	return (-1);
}
