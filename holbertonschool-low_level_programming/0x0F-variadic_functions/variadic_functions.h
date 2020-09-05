#ifndef _VARIADIC_FUNCTIONS_H_
#define _VARIADIC_FUNCTIONS_H_
#include <stdio.h>
#include <stdarg.h>
#include <unistd.h>

/**
 * struct task3 - sample text
 * @Q: char
 * @fptr: function pointer
 */

typedef struct task3
{
	char Q;
	void (*fptr)(va_list);
} yeet;

int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);

#endif
