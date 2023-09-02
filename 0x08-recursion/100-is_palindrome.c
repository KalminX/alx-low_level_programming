#include "main.h"

int len_string(char *s);
int check_if_palindrome(char *s, int i, int len);
/**
 * is_palindrome - a function to check if a string is a palindrome
 * @s: the string to be checked
 * Return: returns 1 if the string is a palindrome and 0 if not
 */
int is_palindrome(char *s)
{
	if (*s == '\0')
		return (1);
	return (check_if_palindrome(s, 0, len_string(s)));
}

/**
 * len_string - a function to calculate the length of the string
 * @s: the string whose length is to be calculated
 * Return: returns the length of the string
 */
int len_string(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + (len_string(s + 1)));
}

/**
 * check_if_palindrome - a function to check if
 * the given string is a palindrome
 * @i: helps me check through the string
 * @s: the string to be checked
 * @len: the length of the string
 * Return: returns 1 if the string is a palindrome and 0 if not
 */
int check_if_palindrome(char *s, int i, int len)
{
	if (*(s + i) != *(s + len - 1))
		return (0);
	if (i >= len)
		return (1);
	return (check_if_palindrome(s, i + 1, len - 1));
}
