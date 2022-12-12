#include <stdio.h>

/**
 * main - Entry point
 *
 * Description - printing possible combinations of 3 digits
 *
 * Return: Always 0.
 */

int main(void)
{
	int x;
	int y;
	int z;

	for (x = 0; x <= 7; x++)
	{
		for (y = x + 1; y < 9; y++)
		{
			for (z = y + 1; z <= 9; z++)
			{
				putchar((x % 10) + '0');
				putchar((y % 10) + '0');
				putchar((z % 10) + '0');

				if (x == 7 && z == y + 1)
					continue;
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');

	return (0);
}

