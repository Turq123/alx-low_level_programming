#include "main.h"

/**
 * more_numbers - prints 10 times the numbers, from 0 to 14.
 */

void more_numbers(void)
{
	int num;
	int line;

	for (line = 0; line <= 9; line++)
	{
		for (num = 0; num <= 14; num++)
		{
			if (num >= 10)
			_putchar('1');
			_putchar(num % 10 + '0');
		}
		_putchar('\n');
	}
}

