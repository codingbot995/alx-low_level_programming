#include "dog.h"
#include <stdlib.h>
/**
 *free_dog - initialize a variable of type struct dog
 * @d:pointer to dog details
 */

void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
