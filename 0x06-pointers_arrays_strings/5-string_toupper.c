#include "main.h"

/**
 * string_toupper - changes all lowercase letters of a string to uppercase
 * @sg: input string
 * Return: char
 */

char *string_toupper(char *sg)
{
	int var = 0;

	while (*(sg + var))
	{
		if (*(sg + var) >= 'a' && *(sg + var) <= 'z')
		*(sg + var) -= 'a' - 'A';
		var++;
	}
	return (sg);
}
