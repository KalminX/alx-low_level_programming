#include "main.h"
/**
 * _islower - checks the case of alphabets
 *
 * @c: the parameter to be checked
 *
 * Return: 0 if lowercase, 1 if uppercase
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
