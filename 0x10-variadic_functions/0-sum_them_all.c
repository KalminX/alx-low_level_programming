#include "variadic_functions.h"
/*
 * sum_them_all - a function that adds an
 * arbitrary number of elements
 * @n: the number of integers
 * Return: returns the sum of the elements
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list my_entries;
	int i, num, sum = 0;

	va_start(my_entries, n);
	for(i = 0; i < n; i++)
	{
		num = va_arg(my_entries, int);
		sum += num;
	}

	va_end(my_entries);
	return (sum);
}
