#include "main.h"
/**
 * reverse_array - a function that reverses an array
 * @a: the array to be reversed
 * @n: the number of elements in the array
 */
void reverse_array(int *a, int n)
{
	int i;
	
	for (i = 0; i < (n / 2); i++)
	{
		int hold = *(a + i);
		*(a + i) = *(a + n - 1 - i);
		*(a + n - 1 - i) = hold;
	}
}
