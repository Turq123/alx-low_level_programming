#include "main.h"

/**
 * print_rev - prints a string, in reverse, followed by a new line.
 * @s: reverse character
 */

void print_rev(char *s)
{
	int count, rev;

	count = 0;

	while (s[count] != '\0')
	{
		count++;
	}

	for (rev = count - 1; rev >= 0; rev--)
	{
		_putchar(s[rev]);
	}
	_putchar('\n');
}
