#include <stdio.h>
#include "dog.h"
/**
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
			printf("Name: %s", d->name);
		if (d->age == NULL)
			printf("(nil)\n");
		else
			printf("Age: %f", d->age);
		if (d->owner == NULL)
			printf("(nil)\n");
		else
			printf("Owner: %s\n", d->owner);
	}
}
