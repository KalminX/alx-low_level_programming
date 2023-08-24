#include "main.h"
/**
 * cap_string - capitalizes all words after special characters
 * @s: the string to be worked on
 * Return: returns the string
 */
char *cap_string(char *s)
{
	int i = 0, j;
	char *sym;

	sym = {',', ';', '.', '!', '?', '"', '(', ')', '{', '}', ' ', '\n', '\t'};

	while (*(s + i) != '\0')
	{
		if (i == 0 && *(s + i) >= 97 && *(s + i) <= 122)
		{
			*(s + i) -= 32;
		}

		for (j = 0; j < 13; j++)
		{
			if (*(s + i) == *(sym + i))
			{
				if (*(s + i + 1) >= 97 && *(s + i + 1) <= 122)
				{
					*(s + i + 1) -= 32;
				}
			}
		}
	}

	return (s);
}
