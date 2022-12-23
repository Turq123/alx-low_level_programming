#include "main.h"

/**
 * print_array - prints n elements of an array of integers
 * @a: pointer character
 * @n: number of elements of the array to be printed
 */

void print_array(int *a, int n)
{
	int count;

	for (count = 0; count < n; count++)
	{
		printf("%d", a[count]);

		if (count == (n - 1))
		{
			break;
		}
		else
		{
			putchar(',');
			putchar(' ');
		}
	}
		putchar('\n');
}
