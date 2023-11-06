#include "dog.h"

/**
 *print_dog - initializes a struct
 *@d: the struct
 *Return: void
 */

void print_dog(struct dog *d)
{
	char *name, *owner;
	float age;

	if (d)
	{
		name = (d->name) ?  d->name : "(nil)";
		owner = (d->owner) ?  d->owner : "(nil)";
		age = (d->age) ? d->age : 0;
		printf("Name: %s\nAge: %f\nOwner: %s\n", name, age, owner);
	}

}
