#include <stdio.h>

/**
 * main - printing sum of multiples of 3 and 5
 *
 * Return: Always 0.
 */

int main(void)
{
	int z, a = 0;

	for (z = 0; z < 1024; z++)
	{
		if ((z % 3) == 0 || (z % 5) == 0)
			a += z;
	}

	printf("%d\n", a);

	return (0);
}
