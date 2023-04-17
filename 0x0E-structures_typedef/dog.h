#ifndef DOG_H
#define DOG_H
#include <stdlib.h>
#include <stdio.h>

 /**
 * struct dog - info on dog.
 * @name: dog's name.
 * @age: age of the dog in float.
 * @owner: name of the owner of the dog.
 *
 */

struct dog
{
	 char *name;
	 float age;
	 char *owner;
 };
typedef struct dog dog_t;
dog_t *new_dog(char *name, float age, char *owner);
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
void free_dog(dog_t *d);
#endif
