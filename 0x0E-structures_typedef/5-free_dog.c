#include "dog.h"

/**
 * free_dog - free(memory) dah dog and get fined by animal control
 * @d: pointer to dog stuct in memory.
 *
 * Return: nothing
 */
void free_dog(dog_t *d)
{
	if (!d)
		return;
	free(d->name);
	free(d->owner);
	free(d);
}
