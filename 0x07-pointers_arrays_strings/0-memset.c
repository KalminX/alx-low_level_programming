#include "main.h"
/**
 * _memset - a function that replaces a
 * specific buffer length with a stated
 * character
 * @s: the buffer
 * @b: the starting point being to be replaced
 * @n: the length of buffer to be replaces
 * Return: returns a pointer to the buffer
 */
char *_memset(char *s, char b, unsigned int n)
{
	char *s_init = s;
	int i;

	for (i = 0; i < (n - 1); i++)
	{
		*s = b;
		s++;
	}
	return (s_init);
}
