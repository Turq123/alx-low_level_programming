#include "main.h"

/**
 * print_sign - sign of a number
 *
 * @n : repeated number
 *
 * Return: 1 if greater, -1 if less, 0 if zero
 */

int print_sign(int n)
{
	if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('+');
		return (1);
	}
}
