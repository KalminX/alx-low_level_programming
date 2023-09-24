#include "variadic_functions.h"
#include <string.h>
/**
 * print_all - a function that can print anything
 * @format: a string containing the specifiers
 */
void print_all(const char * const format, ...)
{
	va_list my_entries;
	char *string = "";

	int i = 0;
	char *ch = "";

	va_start(my_entries, format);
	while (format && *(format + i))
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
			string = va_arg(my_entries, char*);
			if (string != NULL)
				printf("%s%s", ch, string);
			if (string == NULL)
				printf("%s(nil)", ch);
			break;
		default:
			break;
		}
		while (strchr("fcis", *(format + i)))
		{
			ch = ", ";
			break;
		}
		i++;
	}
	va_end(my_entries);
	printf("\n");
}
