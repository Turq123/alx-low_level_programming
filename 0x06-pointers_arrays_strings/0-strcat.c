#include "main.h"

/**
 * _strcat - function that concatenates two strings.
<<<<<<< HEAD
 * Return: var.
=======
 * @dest: pointer char
 * @src: char pointer
 * Return: var
>>>>>>> refs/remotes/origin/main
 */

char *_strcat(char *dest, char *src)
{
	char *var = dest;
<<<<<<< HEAD

	while (*dest != '\0')
	{
		dest++;
	}

	while (*src != '\0')
	{
		*dest = *src;

		dest++;
		src++;
	}

	*dest = '\0';

	return (var);
}

=======
>>>>>>> refs/remotes/origin/main

	while (*dest != '\0')
	{
		dest++;
	}

	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}

	*dest = '\0';

	return (var);

}
