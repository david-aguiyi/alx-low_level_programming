#include <stdio.h>
#include <stdlib.h>

/**
 * main - returns alphabet
 *
 * Description: code to run alphalbets in lowercase
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int ch = 'a';

	while (ch <= 'z')
	{
		putchar(ch);
		ch++;
	}
	putchar('\n');
	return (0);
}
