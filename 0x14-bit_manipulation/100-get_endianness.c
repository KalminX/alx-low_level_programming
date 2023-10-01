#include "main.h"
/**
 * get_endianness - determines the endianness
 * of a computer's architecture
 * Return: returns 1 if it's big endian and 0
 * if it's little endian
 */
int get_endianness(void)
{
	int x = 1;
	char *c = (char *) &x;

	return ((int)*c);
}
