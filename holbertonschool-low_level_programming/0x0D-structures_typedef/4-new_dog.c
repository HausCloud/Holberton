#include <stdio.h>
#include "dog.h"

/**
 * new_dog - malloc a "new dog" and populate with given parameters
 * @name: Django
 * @age: 3.5
 * @owner: Jay
 * Return: pointer to dog_t named new_dog
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_doge;

	new_doge = malloc(sizeof(*new_doge));

	if (new_doge == NULL)
		return (NULL);

	(*new_doge).name = name;
	(*new_doge).age = age;
	(*new_doge).owner = owner;

	return (new_doge);
}
