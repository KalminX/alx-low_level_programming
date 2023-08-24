#include "main.h"
/**
 * _strcmp - a function that compares two strings
 * @s1: the first string
 * @s2: the second string
 * Return: returns the difference between between their ascii values
 */
int _strcmp(char *s1, char *s2)
{
	while (*s1 && *s2 && (*s1 == *s2))
	{
		s1++;
		s2++;
	}

	if (*s1 == *s2)
		return (0);
	return (*s1 - *s2);
}
