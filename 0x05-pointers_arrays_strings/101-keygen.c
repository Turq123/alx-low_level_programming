#include "main.h"
#include <stdlib.h>
#include <time.h>

/**
 * main - generates random valid passwords for the program 101-crackme
 *
 * Return: Always 0
 */

int main(void)
{
	char passw[84];
	int ind = 0, sum = 0, halfa, halfb;

	srand(time(0));

	while (sum < 2772)
	{
		passw[ind] = 33 + rand() % 94;
		sum = sum + passw[ind++];
	}

	passw[ind] = '\0';

	if (sum != 2772)
	{
		halfa = (sum - 2772) / 2;
		halfb = (sum - 2772) / 2;

		if ((sum - 2772) % 2 != 0)
		{
			halfa++;
		}

		for (ind = 0; passw[ind]; ind++)
		{
			if (passw[ind] >= (33 + halfa))
			{
				passw[ind] = passw[ind] - halfa;
				break;
			}
		}

		for (ind = 0; passw[ind]; ind++)
		{
			if (passw[ind] >= (33 + halfb))
			{
				passw[ind] = passw[ind] - halfb;
				break;
			}
		}
	}

	printf("%s", passw);

	return (0);

}
