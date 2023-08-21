#include <stdio.h>
/**
 * _isupper - checks if the case of a letter is upper case
 * @c: letter to be checked
 * Return: 0 if successful
 */
int _isupper(int c)
{
	if ((c >= 'A') && (c <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
