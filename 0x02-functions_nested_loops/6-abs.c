#include "main.h"
/**
  * _abs - a function that computes the absolute value of an integer.
  * @x: number to be computed.
  *
  * Return: Absolute value of number or zero
  */
int _abs(int x)
{
	if (x < 0)
	{
		int abs_val;

		abs_val = x * -1;

		return (abs_val);
	}
	return (x);
}
