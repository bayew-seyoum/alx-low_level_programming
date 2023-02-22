#include <stdio.h>

/**
  * main - prints the sum of all the multiples of 3 or 5 below 1024
  * i, j
  * Return: Always (Success)
  */
int main(void)
{
	int i, j;
	i = 1;
	j = 0;

	while (i < 1024)
	{
		if ((i % 3 == 0) || (i % 5 == 0))
		{
			j += i;
		}

		i++;
	}

	printf("%d\n", z);
	return (0);
}
