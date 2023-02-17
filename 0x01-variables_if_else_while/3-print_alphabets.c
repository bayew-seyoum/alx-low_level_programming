#include <stdio.h>

 /**
  * main -Return lower-case and upper-case alphabet
  * ch: variable alphabet
  *Description: prints lower and upper case Eng alphabet
  * Return: correctly
  *
  */
int main(void)
{
	char ch;
	for (ch = 'a'; ch <= 'z'; ch++)
	{
		putchar(ch);
	}

	for (ch = 'A'; ch <= 'Z'; ch++)
	{
		putchar(ch);
	}

	putchar('\n');
	return (0);

}
