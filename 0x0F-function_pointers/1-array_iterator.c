#include "function_pointers."
/**
 * array_iterator - execute a function pointer on each element of an array
 * @array: array of integers
 * @size: size of array
 * @action: function pointer
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array && action)
	{
		for (i = 0; i < size; i++)
			action(array[i]);
	}
}
