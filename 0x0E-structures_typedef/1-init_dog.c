#include "dog.h"

/**
 *init_dog - initializes a struct
 *@d: the struct
 *@name: the  value
 *@age: the value
 *@owner: the owner value
 *Return: void
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}

}
