#include "main.h"
#include <stdio.h>
/**
 * main - prints the largest prime factor of the number
 *
 * Return: Always 0.
 */

int main(void)
{
	unsigned long int x, y = 612852475143;

	for (x = 3; x < 782849; x = x + 2)
	{
		while ((y % x == 0) && (y != x))
			y = y / x;
	}
	printf("%lu\n", y);
	return (0);
}
