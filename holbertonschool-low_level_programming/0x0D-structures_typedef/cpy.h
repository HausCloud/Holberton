#ifndef _DOG_H_
#define _DOG_H_
#include <stdlib.h>

/**
 * struct dog - structure for dog
 * my_dog - function for specific dog
 * @name: name of dog
 * @age: age of dog
 * @owner: dog's owner
 * Return: doge
 * Description: struct
 */

struct dog
{

	char *name;
	float age;
	char *owner;
};

struct dog *my_dog(char *name, float age, char *owner)
{
	struct dog *doge;

	doge = malloc(sizeof(struct dog));

	if (doge == NULL)
		return (NULL);

	doge->name = name;
	doge->age = age;
	doge->owner = owner;

	return (doge);
}

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);

#endif
