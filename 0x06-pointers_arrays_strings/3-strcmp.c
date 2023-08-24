#include "main.h"
/**
 * _strcmp - a function that compares two strings
 * @s1: the first string
 * @s2: the second string
 */
int _strcmp(char *s1, char *s2)
{
	int i = 0, j = 0;

	while (*s1 && *s2 && (*s1 == *s2))
	{
		s1++;
		s2++;
	}

	if (*s1 == *s2)
		return (0);
	else if (*s1 < *s2)
	{
		return (-1);
	}
	return (1);
}
