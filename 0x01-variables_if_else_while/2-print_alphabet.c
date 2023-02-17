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
	while(ch <= 'z')
	{
		putchar(ch);
		ch++;
	}
	putchar('\n');
	return (0);
}
