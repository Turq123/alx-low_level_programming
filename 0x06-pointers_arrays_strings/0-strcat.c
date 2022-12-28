#include "main.h"

/**
 * _strcat - function that concatenates two strings.
 * Return: var.
 */

char *_strcat(char *dest, char *src)
{
	char *var = dest;

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


