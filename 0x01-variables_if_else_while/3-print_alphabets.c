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
	int CH = 'A';
	int ch = 'a';

	while (ch <= 'z')
	{
		putchar(ch);
		ch++;
	}
	while (ch <= 'Z')
	{
		putchar(CH);
		CH++;
	}

	putchar('\n');
	return (0);
}
