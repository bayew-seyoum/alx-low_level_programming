#include "main.h"
#include "6-abs.c"
/**
 * print_last_digit -a function that prints the last digit of a number.
 *
 * x: number
 * Return: last digit of x
 *
 */

int print_last_digit(int x)
{
	_putchar('0' + _abs(x % 10));
	return (_abs(x % 10));
}
