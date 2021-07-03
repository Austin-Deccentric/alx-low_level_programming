#include "holberton.h"
/**
* more_numbers- Print numbers 0 to 14 10 times.
*/

void more_numbers(void)
{
	int i, j;

	for (i = 0; i < 11; i++)
	{
		for (j = 0; j < 15; j++)
		{
			if (j > 9)
				_putchar('1');

			_putchar('0' + (j % 10));
		}

		_putchar('\n');
	}
}

