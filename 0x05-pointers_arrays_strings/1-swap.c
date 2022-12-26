#include "main.h"

/**
 * swap_int - swap integers
 * @a: caracter 1
 * @b: character 2
 */

void swap_int(int *a, int *b)
{
	int var;

	var = *a;
	*a = *b;
	*b = var;
}
