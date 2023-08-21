#include <stdio.h>
/**
 * main - _isupper
 * @c: letter to be checked
 * Return: 0 if successful
 */
int _isupper(char c)
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
