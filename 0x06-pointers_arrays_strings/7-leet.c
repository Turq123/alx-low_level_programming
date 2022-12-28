#include "main.h"

/**
 * leet - function that encodes a string into 1337
 * @sg: input string
 */

char *leet(char *s)
{
	int x, y;
	char a[] = "aAeEoOtTlL";
	char b[] = "4433007711";

	for (x = 0; *(s + x); s++)
	{
		for (y = 0; y < 10; y++)
		{
			if (a[y] == s[x])
			{
				s[x] = b[y];
			}

		}
	}
	return (s);
}

