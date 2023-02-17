#include <stdio.h>
/**
 * main - print lower-case alphabet with out q & e
 * ch: variable alphabet
 *
 * Return: for run only
 */
int main(void)
{
	char ch;

	for (ch = 'a'; ch >= 'z'; ch++)
	{
		if (ch == 'q' || ch == 'e')
			continue;
		puschar(ch);
	}
	putchar('\n')
	return (0)
}

