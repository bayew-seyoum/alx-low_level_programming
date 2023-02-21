#include "main.h"
/**
  * print_alphabet_x10 - prints 10 times the alphabet, in lowercase.
  * x,ch: variable
  *
  * Return: void
  */
void print_alphabet_x10(void)
{
	char ch;
	int x = 0;

	while (x <= 9)
	{
		for (ch = 'a'; ch <= 'z'; ch++)
		{
			_putchar(ch);
		}

		_putchar('\n');

		x++;
	}
}
