#include "main.h"

/**
 * puts_half - prints second half of a string
 * @str: half output character
 */

void puts_half(char *str)
{
	int var, skip = 0;

	while (skip >= 0)
	{
		if (str[skip] == '\0')
		{
			break;
		}
		skip++;
	}

	if (skip % 2 == 1)
	{
		var = skip / 2;
	}

	else
	{
		var = (skip - 1) / 2;
	}

	for (var++; var < skip; var++)
	{
		_putchar(str[var]);
	}
	_putchar('\n');
}
