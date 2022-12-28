#inclide " main.h"

/**
 * print_number - function that prints an integer
 * @n: integer
 */

void print_number(int n)
{
	unsigned int y;

	if (n < 0)
	{
		_putchar('-');

		n = n * -1;
	}

	y = n;

	if (y / 10)
		print_number(x / 10);

	_putchar(x % 10 + '0');
}
