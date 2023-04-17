#include "dog.h"

#include <stdio.h>
#include <stdlib.h>

/**
 * _strcopy - copy read only data to mutatable.
 * @dst: pointer to copy char to.
 * @src: read only data.
 */
void _strcopy(char *dst, char *src)
{
	int i;

	for (i = 0; src[i]; i++)
		dst[i] = src[i];
	dst[i] = '\0';
}


dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *d;
	int a, b;

	for (a = 0; name[a]; a++)
		;
	for (b = 0; owner[b]; b++)
		;

	d = malloc(sizeof(dog_t));
	if (!d)
		return (NULL);

	d->name = malloc(a + 1);
	if (!d->name)
	{
		free(d);
		return (NULL);
	}

	d->owner = malloc(b + 1);
	if (!d->owner)
	{
		free(d->name);
		free(d);
		return (NULL);
	}

	_strcopy(d->name, name);
	_strcopy(d->owner, owner);
	d->age = age;
	return (d);
}
