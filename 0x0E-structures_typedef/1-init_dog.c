#include "dog.h"

#include <stdio.h>
#include <stdlib.h>

/**
 * init_dog - Initialized dog stuct.
 * @d: some pointer to type dog struct.
 * @name: dog name to set.
 * @age: dog age to set.
 * @owner: my hooman.
 *
 * Return: pointer to dog
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (!d)
		return;
	d->name = name;
	d->age = age;
	d->owner = owner;
}
