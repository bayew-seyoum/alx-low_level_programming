#include "main.h"

/**
  * print_triangle -  prints a triangle, followed by a new line.
  * @size: The size of the squares triangle
  * i, j, k: variable
  * Return: empty
  */
void print_triangle(int size)
{
	int i, j, k;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (x = 0; i < size; i++)
		{
			for (j = size - j; j > 1; j--)
			{
				_putchar(32);
			}

			for (z = 0; k <= i; k++)
			{
				_putchar(35);
			}

			_putchar('\n');
		}
	}
}

