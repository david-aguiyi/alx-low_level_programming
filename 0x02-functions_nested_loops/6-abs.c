#include "main.h"

/**
 * _abs -> return absolute value of a number
 * @n: parameter
 * Return: Always 0 (Success)
 */

int _abs(int n)
{
	if (n < 0)
		n = -n;
	return (n);
}
