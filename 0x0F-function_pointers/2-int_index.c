#include "function_pointers.h"
/**
 * int_index - returns the index of an element after searching
 * @array: the array to be searched
 * @cmp: the pointer to the function
 * @size: the size of the array
 * Return: returns the index of the element if found
 * returns -1 if false
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0)
		return (-1);
	if (array && cmp)
	{
		for(i = 0; i < size; i++)
		{
			if (cmp(array[i]))
			{
				return (i)
			}
		}
	}
	return (-1);
}
