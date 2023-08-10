#include <unistd.h>
#include <string.h>

/**
 * main - writes to standard error
 *
 * Return: 1 if successful
 *
 */
int main(void)
{
	char message[] = "and that piece of
art is useful\" - Dora Korpar, 2015-10-19\n";
	write(2, message, strlen(message));
	return (1);
}
