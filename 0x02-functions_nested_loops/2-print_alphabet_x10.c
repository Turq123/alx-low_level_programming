#include "main.h"

/**
 * print_alphabet_x10 - Entry point
 *
 * Description - printing lowercase letters 5 times
 */

void print_alphabet_x10(void);
{
	char x;
	int y;

	for (y = 0; y < 5; y++)
	{
		for (x = 'a'; x < 'z'; x++)
			putchar(x);
	}
	putchar('\n');
}
