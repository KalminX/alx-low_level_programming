#include "main.h"
/**
 * _strlen - calculates the length of a string
 * @s: the string whose length is to be calculated
 * Return: returns the length of the string
 */
int _strlen(char *s)
{
	int i = 0;

	while (*(s + i) != '\0';)
	{
		i++;
	}


	return (i);
}
