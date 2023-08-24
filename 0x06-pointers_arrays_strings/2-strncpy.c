#include "main.h"
/**
 * _strncpy - a function that copies a string to another string
 * @dest: the string to be copied to
 * @src: the string to be copied from
 * @n: the number of characters to be copied
 * Return: returns the string dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	while ((*(src + i) != '\0') && (i < n))
	{
		*(dest + i) = *(src + i);
		i++;
	}
	
	while (i < n)
	{
		*(dest + i) = '\0';
	}

	return (dest);
}
