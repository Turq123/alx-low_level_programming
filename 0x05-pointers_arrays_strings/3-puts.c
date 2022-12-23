#include "main.h"
#include <stdio.h>

/**
 * _puts - prints a string, followed by a new line, to stdout.
 *
 * @str: input string.
 */

void _puts(char *str)
{
	int rep = 0;

	while (str[rep] != '\0')
	{
		_putchar(str[rep]);
		rep++;
	}
	_putchar('\n');
}
