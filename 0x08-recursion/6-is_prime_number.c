#include <stdio.h>
/**
  * checker - checks recursively the input from is_prime_number
  * @i: iterator
  * @n: a number to check
  * Return: 1 if i is a prime, else return 0 otherwise.
  */
int checker(int i, int n)
{
	if (n % i == 0 || n < 2)
		return (0);
	else if (i == n - 1)
		return (1);
	else if (n > i)
		return (checker(i + 1, n));
	return (1);
}
/**
  * is_prime_number - checks if the number is a prime number
  * @n: the number to check
  * Return: 1 if n is a prime, else return 0 otherwise.
  */
int is_prime_number(int n)
{
	return (checker(2, n));
}
