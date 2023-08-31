#include "main.h"
/**
 * _strlen_recursion - a function to recursively calculate
 * the length of a string
 * @s: the string whose length is to be calculated
 * Return: returns the length of the string
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	return (1 + (_strlen_recursion(s + 1)));
}
