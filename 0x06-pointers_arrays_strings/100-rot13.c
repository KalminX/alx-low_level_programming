#include "main.h"
/**
 * rot13 - replaces a letter array with the letter 13 characters in front of it
 * @str: the letter array to be modified
 * Return: returns a pointer to the string
 */
char *rot13(char *str)
{
	int i;
	char *input = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char *output = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	while (*str != '\0')
	{
		for (i = 0; i < 52; i++)
		{
			if (*str == *input)
				*str = *output;
		}
		*str++;
	}
	return (str);
}
