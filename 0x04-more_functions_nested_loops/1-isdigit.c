#include "main.h"

/**
 * _isdigit - checks for a digit (0 through 9).
 * @c: character
 * Return: 1 or 0.
 */

int _isdigit(int c)
{
	if (c <= '0' && c >= '0')
		return (1);
	else
		return (0);
}