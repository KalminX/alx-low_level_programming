#include <stdio.h>
#include "dog.h"
/**
 * print_dog - prints the element in the
 * dog struct
 * @d: the dog struct
 * Return: returns nothing
 */
void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		if (d->name == NULL)
			printf("(nil)\n");
		else
			printf("Name: %s\n", d->name);
		if (d->age == NULL)
			printf("%d\n", 0);
		else
			printf("Age: %f\n", d->age);
		if (d->owner == NULL)
			printf("(nil)\n");
		else
			printf("Owner: %s\n", d->owner);
	}
}
