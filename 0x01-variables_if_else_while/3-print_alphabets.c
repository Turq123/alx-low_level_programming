#include <stdio.h>

/**
 * main - Entry point
 *
 * Description - printing lowercase and upper case with putchar
 *
 * Return: Always 0.
*/

int main(void)
{
	char xy;
	char XY;

	for (xy = 'a'; xy <= 'z'; xy++)
		putchar(xy);

	for (XY = 'A'; XY <= 'Z'; XY++)
		putchar(XY);

	putchar('\n');

	return (0);
}



