#include <stdio.h>
/**
 * _isdigit - checks if it's a digit
 * @c: the digit to be checked
 * Return: returns 1 if it's a digit and 0 if otherwise
 */
int _isdigit(int c)
{
	if ((c >= 48) && (c <= 57))
		return (1);
	else
		return (0);
}
