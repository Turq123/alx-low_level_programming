#include <stdio.h>

/**
 * main - printing fibonacci numbers less than 4,000,000
 *
 * Return: Always 0.
 */

int main(void)
{
	unsigned long x = 0, y = 1, z;
	float a;

	while (1)
	{
		z = x + y;
		if (z > 4000000)
			break;

		if ((z % 2) == 0)
			a += z;

		x = y;
		y = z;
	}
	printf("%.0f\n", a);

	return (0);
}
