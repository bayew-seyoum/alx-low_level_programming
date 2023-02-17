#include <stdio.h>
/**
 * main - prints all the numbers of base 16 in lowercase
 * x: variable number
 * program that prints all the numbers of base 16 in lowercase,
 * followed by a new line.
 *
 * Return:zero
 */
int main(void)
{
	int x;
	char y;

	for (x = 0; x < 10; x++)
		putchar('0' + x);

	for (y = 'a'; y < 'g'; y++)
		putchar(y);

	putchar('\n');
	return (0);
}
