#include "main.h"
/**
  * _isalpha -a function that checks for alphabetic character.
  *
  * @ch: variable character to be checked
  *
  * Return: 1 for alphabetic character or 0 for anything else
  */
int _isalpha(int ch)
{
	if ((ch >= 65 && ch <= 90) || (ch >= 97 && ch <= 122))
	{
		return (1);
	}

	return (0);
}
