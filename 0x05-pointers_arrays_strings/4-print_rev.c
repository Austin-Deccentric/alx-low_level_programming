#include "holberton.h"
/**
* print_rev- Prints a string in reverse.
* @s: Stirng to print.
*/

void print_rev(char *s)
{
	int size = 0;

	while (*(s + size) != '\0')
		size++;

	while (size >= 0)
	{
		_putchar(*(s + size));
		size--;
	}
	_putchar('\n');

}

