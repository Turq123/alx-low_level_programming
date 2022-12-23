#include "main.h"

/**
 * _strlen - function that returns the length of a string.
 * @s: string
 * Return: Always var.
 */

int _strlen(char *s)
{
	int var = 0;

	while (*(s + var) != 0)
	{
		var++;
	}

	return (var);
}
