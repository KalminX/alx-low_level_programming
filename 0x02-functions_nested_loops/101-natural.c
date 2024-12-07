#include "main.h"
#include <stdio.h>


int main(void)
{
	int i, sum;

	i = sum = 0;
	while (i < 1024)
	{
		if ((i % 3 == 0) && (i % 5 == 0))
		{
			sum += i;
		}
		i++;
	}
	printf("%d\n", sum);
	return (0);
}
