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
	int x;

	for (a = 0; a < 100; a++)
	{
		for (x = 0; x < 100; x++)
		{
			if (a < x)
			{
				putchar((a / 10) + 48);
				putchar((a % 10) + 48);
				putchar(' ');
				putchar((x / 10) + 48);
				putchar((x % 10) + 48);

				if (a != 98 || x != 99)
				{
				putchar(',');
				putchar(' ');
				}
			}
		}
	}

	putchar('\n');

	return (0);
}
