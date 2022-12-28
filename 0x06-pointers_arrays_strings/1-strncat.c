#include "main.h"

/**
<<<<<<< HEAD
 * _strncat - function that concatenates two strings.
 * @dest: pointer
 * @src: pointer
=======
 * _strncat - concatenates two strings
 * @dest: char
 * @src: char
>>>>>>> refs/remotes/origin/main
 * @n: integer
 * Return: dest.
 */

char *_strncat(char *dest, char *src, int n)
{
	int x, y;

	for (x = 0; dest[x] != '\0'; x++)
	{
		continue;
	}

	for (y = 0; src[y] != '\0' && y < n; y++)
	{
<<<<<<< HEAD
		dest[x + y] = src[y];
	}

	dest[x + y] = '\0';
	return dest;
=======
		dest[y + x] = src[y];
	}

	dest[x + y] = '\0';
	return (dest);
>>>>>>> refs/remotes/origin/main
}
