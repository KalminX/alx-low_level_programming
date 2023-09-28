#include "main.h"
/**
 * binary_to_uint - converts binary to an unsigned integer
 * @b: a pointer to the binary
 * Return: returns the converted number
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int mul = 1, result = 0, len = strlen(b), sum = 0;
	int i = 0;

	if (b == NULL || *b == '\0')
		return (0);

	for (i = len - 1; i >= 0; i--)
	{
		if (b[i] == '0' || b[i] == '1')
		{
			result = (b[i] - '0') * mul;
			sum += result;
			mul *= 2;
		}
		else
		{
			return (0);
		}
	}
	return (sum);
}
