#include <stdio.h>

/**
 * main - sample text
 *
 * Return: sample text
 */

int main(void)
{
	char a;

	for (a = 'a' ; a <= 'z' ; a++)
	{
		if (a != 'q' && a != 'e')
		putchar(a);
	}
		putchar('\n');
		return (0);
}
