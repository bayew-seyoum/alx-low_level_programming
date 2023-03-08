#include "main.h"
/**
 * _pow_recursion -a function that returns the value of x raised to_
 * _ the power of y.
 * @x: base integer
 * @y: power integer
 * Return: - for y < 0 othewise sucesess
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	if (y == 1)
		return (x);
	return (x * _pow_recursion(x, y - 1));
}
