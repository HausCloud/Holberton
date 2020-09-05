#include <stdio.h>
#include "function_pointers.h"

/**
 * print_name - print name
 * @name: pointer to string "Dalton" and "Rick Harris"
 * @f: pointer to function and takes char * as parameter
 */

void print_name(char *name, void (*f)(char *))
{
	if (name == NULL)
		return;

	if (f == NULL)
		return;

	else
	(*f)(name);
}
