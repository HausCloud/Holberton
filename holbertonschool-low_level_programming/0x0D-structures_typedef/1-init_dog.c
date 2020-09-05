 #include <stdio.h>
#include "dog.h"

/**
 * init_dog - initialize name, age, and owner
 * @d: pointer to dog struct
 * @name: name of dog
 * @age: age of dog
 * @owner: dog's owner
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		return;

/* d is pointer to struct dog */

	(*d).name = name;
	(*d).age = age;
	(*d).owner = owner;
}
