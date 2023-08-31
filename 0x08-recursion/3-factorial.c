#include "main.h"
/**
 * factorial - a program that calculates the factorial of a number
 * @n: the number whose factorial is to be calculated
 * Return: returns the factorial of the function
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else 
	{
		if (n == 0)
		{
			return (1);
		}
		return (n *(factorial(n - 1)));
	}
}
