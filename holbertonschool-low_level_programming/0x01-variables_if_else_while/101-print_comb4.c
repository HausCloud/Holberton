#include <stdio.h>

/**
 * main - sample text
 *
 * Return: sample text
 */

int main(void)
{
	int a, b, c;

	for (a = '0'; a <= '9'; a++)
	{
		for (b = '0'; b <= '9'; b++)
		{
			for (c = '0'; c <= '9'; c++)
			{
				if (a <= b && a != b && b < c)
				{
					putchar(a);
					putchar(b);
					putchar(c);
					if (a == '7' && b == '8' && c == '9')
						break;
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar(10);

	return (0);
}
