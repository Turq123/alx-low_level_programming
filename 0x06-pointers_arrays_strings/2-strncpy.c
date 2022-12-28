#include "main.h"

/**
<<<<<<< HEAD
 * _strncpy - copies a string
 * @dest: pointer
 * @src: pointer
=======
 * _strncpy - function that copies a string.
 * @dest: char
 * @src: char
>>>>>>> refs/remotes/origin/main
 * @n: integer
 * Return: dest
 */

char *_strncpy(char *dest, char *src, int n)
{
<<<<<<< HEAD
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
=======

>>>>>>> refs/remotes/origin/main
