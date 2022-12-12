#include <stdio.h>

/**
 * main - Entry point
 *
 * Description - printing lowercase alphabets without of q & e using putchar
 *
 * Return: Always 0.
 */

int main(void)
{
	char xy;

	for (xy = 'a'; xy <= 'z'; xy++)
		if (xy != 'q' && xy != 'e')

			putchar(xy);

	putchar('\n');

	return (0);
}
