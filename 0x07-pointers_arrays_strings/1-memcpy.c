#include "main.h"
/**
 * _memcpy - a function that copies a buffer to a string
 * @dest: the destination to be copied to
 * @src: the string to be copied
 * @n: width of the string to be copied
 * Return: returns the modified string
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;
	char *string = dest;

	for (i = 0; i < n; i++)
	{
		*(dest + i) = *(src + i);
	}

	return (string);
}
