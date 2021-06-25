#include "holberton.h"
/**
* jack_bauer- Prints the minutes of the day from 00:00 to 23:59.
*/
void jack_bauer(void)
{
	int hours;
	int mints;

	for (hours = 0; hours <= 23; hours++)
	{
		int h1 = hours / 10;
		int h2 = hours % 10;

		for (mints = 0; mints <= 59; mints++)
		{
			int m1 = mints / 10;
			int m2 = mints % 10;

			_putchar('0' + h1);
			_putchar('0' + h2);
			_putchar(':');
			_putchar('0' + m1);
			_putchar('0' + m2);
			_putchar('\n');
		}
	}
}

