#include "main.h"

/**
 * print_alphabet - Entry point
 *
 * Description - printing lowercase alphabet
 *
 * Return: Always 0.
 */

void print_alphabet(void)
{
	char v;

	for (v = 'a'; v <= 'z'; v++)
		_putchar(v);

	_putchar('\n');

}
