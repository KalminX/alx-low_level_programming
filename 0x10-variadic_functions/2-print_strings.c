#include "variadic_functions.h"
/**
 * print_strings - prints the strings entered into a function
 * @separator: the string between the strings
 * @n: the number of strings passed
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list my_entries;
	char *string;

	for (i = 0; i < n; i++)
	{
		string = va_arg(my_entries, char*);
		if (string == NULL)
			string = "(nil)";
		printf("%s", string);
		if (i != n - 1 && separator)
			printf("%s", separator);
	}
	printf("\n");
}
