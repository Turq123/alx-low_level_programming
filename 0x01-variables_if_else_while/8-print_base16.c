#include <stdio.h>

/**
 * main - Entry point
 *
 * Description - printing all numders in base 16 in lowercase
 *
 * Return: Always 0.
 */

int main(void)
{
	int x;
	char xy;

	for (x = 0; x < 10; x++)
		putchar((x % 10) + '0');
	for (xy = 'a'; xy < 'g'; xy++)
		putchar(xy);

	putchar('\n');

	return (0);
}
