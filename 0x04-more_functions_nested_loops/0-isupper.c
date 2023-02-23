#include "main.h"
/**
 * _isupper -  checks for uppercase character
 * @c: character to be check
 *
 * Return: gives 1 or 0
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	return (0);
}
