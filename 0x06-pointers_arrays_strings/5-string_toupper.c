#include "main.h"
/**
 * string_toupper - converts a string to uppercase
 * @str: the string to be converted
 * Return: returns the string in uppercase
 */
char *string_toupper(char *str)
{
	int i = 0;

	while (*(str + i) != '\0')
	{
		if ((*(str + i) >= 97) && (*(str + i) <= 122))
		{
			*(str + i) = *(str + i) - 32;
		}
		i++;
	}

	return (str);
}
