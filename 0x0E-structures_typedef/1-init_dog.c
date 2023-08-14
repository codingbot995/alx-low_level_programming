#include "dog.h"
#include <stdio.h>
/**
 * init_dog - initialise a dog
 * @d:pointer to dog
 * @name:name of thee dog
 * @age:age of the dog
 * @owner:owner of the dog
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
