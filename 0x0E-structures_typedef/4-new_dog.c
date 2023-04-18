#include "dog.h"

#include <stdio.h>
#include <stdlib.h>

/**
 * free_dog - frees memory allocated for a struct dog
 * @d: struct dog to free
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *my_dog;

	my_dog = malloc(sizeof(dog_t));

	if (!my_dog)
	{
		free(my_dog);
		return (NULL);
	}

	my_dog->name = name;
	my_dog->age = age;
	my_dog->owner = owner;

	return (my_dog);
}
