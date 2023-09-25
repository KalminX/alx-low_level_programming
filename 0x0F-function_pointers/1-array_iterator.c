#include "function_pointers.h"
/**
 * array_iterator - a function that calls a function on the elements
 * in an array
 * @array: the array to be iterated through
 * @size: the size of the array
 * @action: the function pointer
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array && action)
	{
		for (i = 0; i < size; i++)
		{
			action(action[i]);
		}
	}
}
