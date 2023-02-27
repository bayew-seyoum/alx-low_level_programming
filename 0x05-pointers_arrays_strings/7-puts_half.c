#include "main.h"
#include "2-strlen.c"
/**
 * puts_half - prints half of a string
 * @str:string to ptint
 */
void puts_half(char *str)
{
	int i;
	for (i = 0; i <= (_strlen(str) / 2); i++)
		_putchar(str[i]);
	_putchar('\n');
}
