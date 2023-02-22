#include <stdio.h>
/**
 * main - prints the first 98 Fibonacci numbers
 * i,x,y,z: variable
 * Return: ...
 */
int main(void)
{
	int i;
	unsigned long int x = 0, y = 1, z;

	for (i = 1; i <= 98; i++)
	{
		z = x + y;
		if (i != 98)
		{
			printf("%llu, ", z);
		} else
		{
			printf("%llu\n", z);
		}
		x = y;
		y = z;
	}
	return (0);
}
