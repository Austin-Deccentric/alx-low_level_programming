#include "holberton.h"
/**
* print_numbers- Print numbers 0 to 9.
*/

void print_numbers(void)
{
	int i = 0;

	for (; i < 10; i++)
		_putchar('0' + i);

	_putchar('\n');

}

