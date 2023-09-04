#include "main.h"
/**
 * _strchr - a function that returns the pointer to the
 * first occurrence of a character
 * @s: the string to be checked
 * @c: the character whose pointer is to be returned
 * Return: returns a pointer to the string
 */
char *_strchr(char *s, char c)
{
	while ((*s != c) && (*s != '\0'))
	{
		s++;
	}
	if (*s == c)
		return (s);
	return (NULL);
}
