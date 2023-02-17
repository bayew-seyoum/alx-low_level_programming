#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main -print whether variable n is positive or negative.
 * n -random number
 *return: completed accurately
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
	{
		printf("%d is positive\n", n);
	} else if (n == 0)
	{
		printf("%d is zero\n", n);
	} else
	{
		 printf("%d is negative\n", n);
	}
	/* your code goes there */
	return (0);
}
