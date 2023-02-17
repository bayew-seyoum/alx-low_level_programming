#include <stdio.h>
 /**
  * main -reuren lower-case alphabet
  * ch: variable alphabet
  *
  * Returen: correctly
  */
int main(void)
{
	char ch = 'a';
	while (ch <= 'z')
	{
		putchar(ch);
		ch++;
	}
	putchar('\n');
	return (0);
}
