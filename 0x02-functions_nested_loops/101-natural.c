#include <stdio.h>

/**
 * main - printing sum of multiples of 3 and 5
 *
 * Return: Always 0.
 */

int main(void)
{
	int x;
	int y;
	int z;
	int a = 0;

	for (x = 0; x < 1024; x++)
	{
		if (x % 3 == 0)

			printf("%d, ", x);
	}

	putchar('\n');
	putchar('\n');

	for (y = 0; y < 1024; y++)
	{
		if (y % 5 == 0)
			printf("%d, ", y);
	}

	putchar('\n');
	putchar('\n');

	for (z = 0; z < 1024; z++)
	{
		if (z % 3 == 0 || z % 5 == 0)
			a = a + 1;
	}

	printf("%d", a);

	putchar('\n');

	return (0);
}
