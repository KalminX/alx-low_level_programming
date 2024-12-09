#include "main.h"

/**
 * print_line - A function that draws a line on the terminal
 *
 * @n: The number of underscores to be printed
 */
void print_line(int n)
{
    int i;

    for (i = 0; i < n; i++)
    {
        _putchar('_');
    }
    _putchar('\n');
}