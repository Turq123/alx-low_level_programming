#include "main.h"

/**
 * rev_string - function that reverses a string.
 * @s: reverse string
 */

void rev_string(char *s)
{
	int count = 0, perm, rev;
	char words;

	while (s[count] != '\0')
	{
		count++;
	}

	rev = count - 1;

	for (perm = 0; rev >= 0 && perm < rev; rev--, perm++)
	{
		words = s[perm];
		s[perm] = s[rev];
		s[rev] = words;
	}

}
