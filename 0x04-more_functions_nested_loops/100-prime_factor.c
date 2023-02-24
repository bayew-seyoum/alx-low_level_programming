#include <stdio.h>
#include <math.h>

/**
  * main - Prints the largest prime factor of the number 612852475143
  * i: variable
  * maxf: maximum prime factor
  * Return: Always 0 (Success)
  */
int main(void)
{
	long i, maxf;
	long n = 612852475143;
	double square = sqrt(n);

	for (i = 1; i <= square; i++)
	{
		if (n % i == 0)
		{
			maxf = n /  i;
		}
	}

	printf("%ld\n", maxf);

	return (0);
}
