#include "main.h"

/**
 * _strcpy - copies the string pointed to by src
 * including the terminating null byte (\0)
 * to the buffer pointed to by dest.
 * Return: dest
 * @dest: check char
 * @src: check char
 */

char *_strcpy(char *dest, char *src)
{
	int var;

	for (var = 0; src[var] != 0; var++)
	{
		dest[var] = src[var];
	}
	dest[var] = '\0';
	return (dest);
}
