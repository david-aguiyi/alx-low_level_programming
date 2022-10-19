#include "main.h"

/**
 * print_last_digit -> prints the last digit
 * @n: the passed arguments
 * Return: Always 0 (Success)
 */

int print_last_digit(int n)
{
	int c = n % 10;

	if (c < 0)
		c *= -1;

	_putchar(c + '0');

	return (0);
}
