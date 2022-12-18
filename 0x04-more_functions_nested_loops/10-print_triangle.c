#include "main.h"

/**
 * print_triangle - prints a triangle, followed by a new line.
 * @size: character
 */

void print_triangle(int size)
{
	int a;
	int b;
	int c;

	if (size <= 0)
	{
		_putchar('\n');
	}

	for (a = 0; a <= size; a++)
	{
		for (c = size - a; c >= 1; c-- )
		{
			_putchar(' ');
		}

		for (b = 1; b <= a; b++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}
