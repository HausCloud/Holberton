#ifndef _HOLBERTON_H_
#define _HOLBERTON_H_
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <unistd.h>

/**
 * struct Rengar - structure for different cases
 * @vlad: function specifiers
 * @leesin: function pointer
 */

/* kitty cat structure */
typedef struct Rengar
{
/* period man character*/
	char *vlad;

/* the blind monk function pointer*/
	int (*leesin)(va_list);
} yeet; /* alias for kitty cat */

int _printf(const char *format, ...);
int pc(va_list warwick);
int ps(va_list warwick);
int pd(va_list warwick);
int pi(va_list warwick);
int pp(va_list warwick);
int printeger(int z);
int _putchar(char c);
void _puts(char *str);

#endif
