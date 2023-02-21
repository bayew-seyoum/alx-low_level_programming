#include "main.h"
/**
 * _islower - a function that checks for lowercase character
 *
 * @c: character
 *
 * Return:one or  zero
 *
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	return (0);
}
