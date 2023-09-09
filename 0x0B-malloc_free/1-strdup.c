#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _strdup - returns a pointer to a copy
 * of a string literal in another address
 * @str: the string to be copied
 * Return: returns a pointer to the modified
 * string
 */
char *_strdup(char *str)
{
	char *ptr;
	unsigned int i, j;

	i = _strlen(str);
	ptr = (char *) malloc(i + 1);

	if (ptr == NULL)
	{
		return (NULL);
	}
	for (j = 0; j <= i; j++)
	{
		*(ptr + j) = *(str + j);
	}
	return (ptr);
}

/**
 * _strlen - the length of the string
 * @str: the string whose length id to be found
 * returns the length of the string
 */
unsigned int _strlen(char *str)
{
	if (*str == '\0')
		return (0);
	return (1 + _strlen(str + 1));
}
