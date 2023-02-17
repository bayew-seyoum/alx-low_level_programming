#include <stdio.h>
/**
 * main - print single digit number
 * x: variable number
 * print single digit number of base ten starting from zero
 *
 * Return: alwayse reuren zero
 */
int main(void)
{
	int x;

	for (x = 0; x < 10; x++)
		putchar("0" + x);
	putchar('\n');
	return (0);
}
