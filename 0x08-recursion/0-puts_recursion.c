#include "main.h"
/**
 * _puts_recursion - use recursion to replicate the puts function
 * @s: the string to be printed
 */
void _puts_recursion(char *s);
{
	if (*s == '\0')
	{
		_putchar('\n');
		return (0);
	}
	_putchar(*s);
	return (_puts_recursion(s + 1));
}
