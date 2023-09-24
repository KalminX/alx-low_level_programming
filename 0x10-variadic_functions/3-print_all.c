#include "variadic_functions.h"
/**
 * print_all - a function that can print anything
 * @format: a string containing the specifiers
 */
void print_all(const char * const format, ...)
{
	va_list my_entries;

	int i = 0;
	char *ch = "";

	va_start(my_entries, format);
	while (*(format + i))
	{
		switch (*(format + i))
		{
		case 'f':
			printf("%s%f", ch, va_arg(my_entries, double));
			break;
		case 'i':
			printf("%s%d", ch, va_arg(my_entries, int));
			break;
		case 'c':
			printf("%s%c", ch, va_arg(my_entries, int));
			break;
		case 's':
			if (va_arg(my_entries, char*))
				printf("%s%s", ch, va_arg(my_entries, char*));
			else
				printf("%s%s", ch, "(nil)");
			break;
		default:
			break;
		}
		i++;
		ch = ", ";
	}
	va_end(my_entries);
	printf("\n");
}
