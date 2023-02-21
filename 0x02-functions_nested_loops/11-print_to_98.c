#include "main.h"
#include <stdio.h>
/**
 * print_to_98 - Prints all natural numbers from n to 98
 * @x: The number to start printing from
 *
 * Return: Always 0.
 */
void print_to_98(int x)
{
	if (x <= 98)
	{
		for (; x <= 98; x++)
		{
			if (x == 98)
			{
				printf("%d", x);
				printf("\n");
				break;
			}
			else
			{
				printf("%d, ", x);
			}
		}
	}
	else
	{
		for (; x >= 98; x--)
		{
			if (x == 98)
			{
				printf("%d", x);
				printf("\n");
				break;
			}
			else
			{
				printf("%d, ", x);
			}
		}
	}
}
