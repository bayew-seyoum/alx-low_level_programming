#include "main.h"
#include "2-strlen.c"
/**
 * print_rev -prints a string, in reverse
 * @S: string to print in reverse
 *
 */
void print_rev(char *s)
{
	int i;

	for (i = _strlen(s) - 1; i >= 0; i--)
	{
		_putchar(*(s + i));
	}
	_putchar('\n');
}
