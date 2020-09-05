#include <stdio.h>

/**
 *
 *
 *
 */

int main(void)
{
	int (*f);

	f = (int *)&main;

	printf("%p\n", f);

}
