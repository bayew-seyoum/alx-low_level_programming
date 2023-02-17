#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/* betty style doc for function main goes there */
int main(void)
{
	int n, , digit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	digit = n % 10;
	if (digit > 5)
	{
	       printf("Last Digit of %d is %d and is greater than 5", n, digit);
	} else if (digit = 0) 
	{
		printf("Last Digit of %d is %d and is 0", n, digit);
	} else 
	{
		printf("Last Digit of %d is %d and is less than 6 and not 0", n, digit);
	}

	/* your code goes there */
	return (0);
}
