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
	int c;

	for (c = 0; c < 10; c++)
	{
		putchar(c);
	}
	putchar('\n');
	return (0);
}