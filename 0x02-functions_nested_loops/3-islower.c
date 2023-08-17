#include "main.h"
/**
 * _islower - checks the case of alphabets
 *
 * Return: 0 if lowercase, 1 if uppercase
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (0);
	}
	else
	{
		return (1);
	}
}
