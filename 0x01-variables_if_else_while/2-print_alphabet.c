#include <stdio.h>
 /**
  * main -return lower-case alphabet
  * ch: variable alphabet
  *
  * Return: correctly
  */
int main(void)
{
	char ch;
	for (ch = 'a' ;ch <= 'z'; ch++)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
