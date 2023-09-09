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
	unsigned int len1, len2, sum, i;
	char *ptr;

	len1 = _strlen(s1);
	len2 = _strlen(s2);
	sum = len1 + len2;
	ptr = (char *) malloc(sum + 1);

	if (ptr == NULL)
		return (NULL);

	for (i = 0; i < sum; i++)
	{
		if (i < len1)
		{
			*(ptr + i) = *s1;
			s1++;
		}
		else
		{
			*(ptr + i) = *s2;
			s2++;
		}

	}
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
