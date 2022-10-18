#include <stdio.h>

/**
 * main - entry point
 *
 * Description: prints a - z
 *
 * Return: Always 0;
 */

int main(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		putchar(c);
	}
	putchar('\n);
	return (0);
}
