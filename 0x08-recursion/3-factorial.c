#include "main.h"
/**
 * factorial -a function that returns the factorial of a given number
 * @n: an integer to copute
 * Return: -1 for negative integer or factorial value
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (0);
	factorial(n) = n * factorial(n - 1);
	return (factorial(n));
}
