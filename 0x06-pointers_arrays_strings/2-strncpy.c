#include "main.h"

/**
 * _strncpy - function that copies a string.
 * @dest: char
 * @src: char
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
