#include "dog.h"
#include <stdio.h>

/**
 * free_dog - free memory from my_dog
 * @d: my_dog
 */

void free_dog(dog_t *d)
{
	free(d);
}
