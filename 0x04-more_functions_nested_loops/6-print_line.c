#include "holberton.h"
/**
* print_line- Draw a straight line @n times
* @n: Length of the line.
*/

void print_line(int n)
{
	while (n > 0)
	{
		_putchar('_');
		n--;
	}

	_putchar('\n');

}

