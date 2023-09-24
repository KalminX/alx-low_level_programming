#include "variadic_functions.h"
/**
 * print_numbers - prints the elements passed in
 * @separator: separates the numbers
 * @n: the number of integers
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list my_entries;
	int num;

	va_start(my_entries, n);
	for (i = 0; i < n; i++)
	{
		num = va_arg(my_entries, int);
		printf("%d", num);
		if (i != n - 1 && separator)
			printf("%s", separator);
	}
	va_end(my_entries);
	printf("\n");
}
