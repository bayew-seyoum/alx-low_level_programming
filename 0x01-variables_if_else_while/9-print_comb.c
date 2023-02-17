#include <stdio.h>
/**
 * main -prints all possible combinations of single-digit numbers.
 * x: varible number
 * program that prints all possible combinations
 *  of single-digit numbers.
 *
 * Return: zero
 */
int main(void)
{
	int x;

	for (x = 0; x < 10; x++)
		putchar('0' + x);
		if (x == 9)
			continue;
		else
			putchar(', ');
	putchar('\n');
	reurn (0);
}
