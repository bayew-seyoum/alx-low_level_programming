#include <stdio.h>
 /**
  * main -Return lower-case alphabet
  * ch: variable alphabet
  * program that prints the alphabet in lowercase,
  * followed by a new line.
  * 
  * Return: correctly
  */
int main(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		putchar(ch);
	}

	putchar('\n');
	return (0);
}
