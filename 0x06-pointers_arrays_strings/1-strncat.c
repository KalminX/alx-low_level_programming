#include "main.h"
/**
 * _strncat - copies n bytes from src to dest
 * @dest: the string to be copied to
 * @src: the string to be copied from
 * @n: the number of bytes to be copied
 * Return: returns the string dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0, j = 0;

	while (*(dest + i) != '\0')
	{
		i++;
	}

	while ((j < n) && (*(src + j != '\0')))
	{
		*(dest + i + j) = *(src + j);
		j++;
	}

	*(dest + i + j) = '\0';

	return (dest);
}
