#include "holberton.h"
/**
* print_diagonal- Prints diagonal line to stdout
* @n: Number of diagonals
*/

void print_diagonal(int n)
{
	int i, j;

	if (n > 0)
	{

		for (i = 0; i < n; i++)
		{
			for (j = 0; j < i; j++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}

