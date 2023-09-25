#include "main.h"
#include <string.h>
/**
 * string_nconcat - the function
 * @s1: the first string
 * @s2: the second string
 * @n: the first bytes of s2
 * Return: return a pointer to char
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, j, k = 0;
	char *ptr;

	ptr = malloc(strlen(s1) + n + 1);
	if (ptr == NULL)
		return (NULL);
	i = 0;
	if (s1 == NULL)
		s1 = "";
	while (*(s1 + i))
	{
		*(ptr + i) = *(s1 + i);
		i++;
	}
	j = 0;
	while (k < n && s2[j] != '\0')
	{
		ptr[i] = s2[j];
		j++;
		i++;
		k++;
	}
	ptr[i] = '\0';
	return (ptr);
}
