#include "main.h"
/**
 * _strcat - a program that concantenates two strings
 * @dest: string to be returned
 * @src: string added
 * Return: returns the string dest
 */
char *_strcat(char *dest, char *src)
{
	int i = 0, j = 0, k = 0, n = 0, m = 0;

	while (*(dest + i) != '\0')
	{
		i++;
	}

	while (*(src + j) != '\0')
	{
		*(dest + j) = *(src + j);
		j++;
	}
	*(dest + j) = '\0';

	return (dest);
}
