#include "main.h"
/**
 * print_diagsums -a function that prints the sum of the two diagonals
 * _ of a square matrix of integers.
 * @a: the matrix
 * @size: the size
 */
void print_diagsums(int *a, int size)
{
	int i, j, diagsum1 = 0, diagsum = 0;
	
	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			if (i == j)
				diagsum1 = diagsum1 + a[i][j];
		}
	}

	for (i = 0; i < size; i++)
        {
                for (j = 0; j < size; j++)
                {
                        if (i + j == size -1)
                                diagsum2 = diagsum2 + a[i][j];
                }
        }
	printf("%d, %d\n", diagsum1, diagsum2);
}
