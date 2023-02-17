#include <stdio.h>
 /**
  * main -return lower-case alphabet
  * ch: variable alphabet
  *
  * Return: correctly
  */
int main(void)
{
	char ch = 'a';
	for (ch <= 'z'; ch++)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
