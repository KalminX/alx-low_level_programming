#include "main.h"
int is_prime(int n, int i);
/**
 * is_prime_number - check if a number is prime recursively
 * @n: the number to be checked
 * Return: returns 0 is the number is not prime
 * returns 1 is the number is prime
 */
int is_prime_number(int n)
{
	return (is_prime(n, n - 1));
}

/**
 * is_prime - checks all condition to ensure
 * the number is prime
 * @n: the number be checked
 * @i: starting point of the recursion
 * Return: same as is_prime_number
 */
int is_prime(int n, int i)
{
	if (n <= 1)
		return (0);
	if (i == 1)
		return (1);
	if (n % i == 0)
		return (0);
	return (is_prime(n, i - 1));
}
