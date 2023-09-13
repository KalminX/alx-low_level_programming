#include <stdio.h>
#include "dog.h"
/**
 * init_dog - a function that initializes a variable
 * of type struct dog
 * @d: the struct for the dog
 * @name: the name of the dog
 * @age: the age of the dog
 * @owner: the owner of the dog
 * Return: returns nothing
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	struct dog d;

	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
