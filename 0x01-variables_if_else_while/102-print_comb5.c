#include <stdio.h>

/**
 * main - Entry point
 *
 * Description - printing possible combinations of two numbers
 *
 * Return: Always 0.
 */

int main(void)
{
	int a;
	int b;
	int x;
	int y;

	for (a = 0; a < 10; a++)
	{
		for (b = a; b < 9; b++)
		{
			for (x = b; x < 10; x++)
			{
				for (y = 1 + b; y < 10; y++)
				{
					putchar((a % 10) + '0');
					putchar((b % 10) + '0');

					putchar(' ');

					putchar((x % 19) + '0');
					putchar((y % 10) + '0');

					if (x == y && a == y && x > b)
						continue;
					putchar(',');
					putchar(' ');
				}
			}
		}
	}

	putchar('\n');

	return (0);
}
