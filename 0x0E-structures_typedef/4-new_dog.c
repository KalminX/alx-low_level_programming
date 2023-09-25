#include "dog.h"
#include <string.h>
/**
 * new_dog - a function that creates a new dog
 * @name: the name of the dog
 * @age: the age of the dog
 * @owner: the owner of the dog
 * Return: returns a dog struct
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;

	int len1 = strlen(name);
	int len2 = strlen(owner);

	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
	{
		return (NULL);
	}

	dog->name = malloc(sizeof(char) * (len1 + 1));
	if (dog->name == NULL)
	{
		free(dog);
		return (NULL);
	}

	dog->owner = malloc(sizeof(char) * (len2 + 1));
	if (dog->owner == NULL)
	{
		free(dog);
		free(dog->name);
		return (NULL);
	}
	dog->age = age;
	strcpy(name, dog->name);
	strcpy(owner, dog->owner);

	return (dog);
}
