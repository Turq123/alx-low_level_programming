#include "main.h"

/**
 * _isalpha - checking for alphabetic character
 *
 * @c: character
 *
 * Return: ! (true) or 0 (false)
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);

	else
		return (0);
}
