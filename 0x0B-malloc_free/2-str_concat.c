#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * str_concat - a function that concantenate
 * two strings
 * @s1: the first string
 * @s2: the second string
 * Return: returns a pointed to the
 * combination
 */
char *str_concat(char *s1, char *s2)
{
	unsigned int len1 = 0, len2 = 0, sum = 0, i = 0;
	char *ptr;

	len1 = _strlen(s1);
	len2 = _strlen(s2);
	sum = len1 + len2;
	ptr = (char *) malloc(sum + 1);

	if (ptr == NULL)
		return (NULL);

	if (*s1)
	{
		while (i < len1)
		{
			*(ptr + i) = *(s1 + i);
			i++;
		}
	}

	if (*s2)
	{
		while (i < sum)
		{
			*(ptr + i) = *(s2 + i - len1);
			i++;
		}
	}
	*(ptr + 1) = '\0';

	return (ptr);
}

/**
 * _strlen - returns the length of a string
 * @str: the string whose length is to be
 * calculated
 * Return: returns the length of the string
 */
unsigned int _strlen(char *str)
{
	if (str == NULL)
		return (0);
	return (1 + _strlen(str + 1));
}
