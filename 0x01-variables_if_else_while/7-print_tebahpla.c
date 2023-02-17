#include <stdio.h>
/**
 * main - prints lower-case alphabet in reverse
 * ch: variable character
 * program that prints the lowercase alphabet in reverse,
 * followed by a new line.
 *
 * Return: always correct or zero
 */
int main(void)
{
	char ch;

	for (ch = 'z'; ch >= 'a'; ch--)
	       putchar(ch);
	putchar('\n');
	return (0);
}	

