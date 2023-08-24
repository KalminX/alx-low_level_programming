#include "main.h"
/**
 * leet - a function that converts based on certain conditions
 * @str: the string to be converted
 * Return: returns the modified string
 */
char *leet(char *str)
{
	int i = 0, j;
	char *a = "aAeEoOtTlL";
	char *b = "4433007711";

	while (*(str + i) != '\0')
	{
		for (j = 0; j < 10; j++)
		{
			if (*(str + i) == *(a + j))
			{
				*(str + i) = *(b + j);
				j++;
			}
		}
		i++;
	}
	return (str);
}
