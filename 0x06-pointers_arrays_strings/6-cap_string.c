#include "main.h"

/**
 * cap_string - capitalizes all words of a string.
 * @sg: string
 * Return: char
 */

char *cap_string(char *sg)
{
	int x = 0, y;
	char var[20] = " \t\n,;.!?\"(){}";

	while (*(sg + x))
	{
		if (*(sg + x) >= 'a' && *(sg + x) <= 'z')
		{
			if (x == 0)
			{
				*(sg + x) -= 'a' - 'A';
			}
			else
			{
				for (y = 0; y <= 12; y++)
				{
					if (var[y] == *(sg + x - 1))
						*(sg + 1) -= 'a' - 'A';
				}
			}
		}
		x++;
	}
	return (sg);
}

