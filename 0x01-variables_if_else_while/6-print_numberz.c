#include <stdio.h>

/**
 * main - Entry point
 *
 * Description - printing all single digits of base 10 with put char
 *
 * Return: Always 0.
 */

int main(void)
{
	int x;

	for (x = 0; x < 10; x++)
		putchar((x % 10) + '0');

	putchar('\n');

	return (0);
}

