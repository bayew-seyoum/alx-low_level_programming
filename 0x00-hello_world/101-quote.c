/*
 * File: 101-quote.c
 * Auth: bayew
 */
#include <stdio.h>
#include <unistd.h>
/*
 * main -prints and that piece of art is useful
 * Description: followed by a new line, to standard error.
 * @2: line of code
 * @and that piece of art is useful\" - Dora Korpar, 2015-10-19\n: printed
 * @59: size of data
 * Return: one
 */
int main(void)
{
	write(2,
"and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 59);
	return (1);
}
