#include "main.h"
/*
 * checker - checks the input number from i to the base n
 * @i: number is squared and compared against base
 * @n: base number to check
 * Return: natural square root of number base
 */
int checker(int n, int i)
{
	if (i * i == n)
		return (i);
	if (i * i > n)
		return (-1);
	return (checker(n, i + 1));
}
/**
 * _sqrt_recursion - a function that returns the natural square root 
 * of a number.
 * @n: number to compute natural square
 * Return: -1 fot n have not natural square otherwise sucesess
 */
int _sqrt_recursion(int n)
{
	return (checker(n, 1));
}
