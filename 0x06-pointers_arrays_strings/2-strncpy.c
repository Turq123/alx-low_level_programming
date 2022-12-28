#include "main.h"

/**
 * _strncpy - copies a string
 * @dest: pointer
 * @src: pointer
 * @n: integer
 * Return: dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int var;

	for (var = 0; var < n && *(dest + var); var++)
	{
		*(dest + var) = *(src + var);
	}

	for (; var < n; var++)
	{
		*(dest + var) = '\0';
	}
	return (dest);
}
