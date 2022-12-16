#include <stdio.h>

/**
 * main - printing the first 50 Fibonacci numbers, starting with 1 and 2
 *
 * Return: Always 0.
 */

int main(void)
{
	int x;
	unsigned long y = 0, z = 1, a;

	for (x = 1; x < 50; x++)
	{
		a = y + z;

		printf("%lu", a);

		y = z;
		z = a;

		if (x == 49)
			printf("\n");
		else
			printf(", ");
	}
	return (0);
}
