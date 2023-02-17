#include <stdio.h>

 /**
  * main -Return lower-case and upper-case alphabet
  * ch: variable alphabet
  *description:this function prints lower and upper case alphabet
  *From a-z and A-Z
  * Return: correctly
  *
  */
int main(void)
{
	/*lets start by declare a variable*/

	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
		putchar(ch);

	for (ch = 'A'; ch <= 'Z'; ch++)
		putchar(ch);

	putchar('\n');
	return (0);

}
