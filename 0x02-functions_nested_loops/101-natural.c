#include <stdio.h>

/**
 * main - printing sum of multiples of 3 and 5
 *
 * Return: Always 0.
 */

int main(void)
{
	int z;
	int a = 0;

	for (z = 0; z < 1024; z++)
	{
		if (z % 3 == 0 || z % 5 == 0)
			a = a + 1;
	}

	printf("%d", a);

	putchar('\n');

	return (0);
}
