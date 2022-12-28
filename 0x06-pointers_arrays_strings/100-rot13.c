#include "main.h"

/**
 * rot13 - encodes a string using rot13.
 * @sg: string
 */

char *rot13(char *sg)
{
	int x, y;
	char a[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char b[] = "nopqrstuvwqyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	for (x = 0; *(sg + x); x++)
	{
		for (y = 0; y <= 52; y++)
		{
			if (a[y] == *(sg + x))
			{
				*(sg + x) = b[y];
				break;
			}
		}
	}
	return (sg);
}
