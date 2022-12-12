#include <stdlib.h>
#include <time.h>
/* more headers goes there */
#include <stdio.h>

/* betty style doc for function main goes there */
/**
 * main - Entry point
 * Description - thr last digif of the string
 * Return: 0
 */
int main(void)
{
	int n;
	int v;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	v = n % 10;
	printf("Last digit of %d is %d", n, v);
	if (v > 5)
	{
		printf("and is greater thwn 5\n");
	}
	if (v == 0)
	{
		printf("and is zero\n");
	}
	if (v < 6 && v != 0)
	{
		printf("and is less than 6 and not 0\n");
	}
	return (0);
}
