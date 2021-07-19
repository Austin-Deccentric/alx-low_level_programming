#include "holberton.h"
/**
* puts_half- Prints half of a string.
* @str: Pointer to char.
*/

void puts_half(char *str)
{
	int size = 0, n, i;

	while (*(str + size) != '\0')
		size++;

	n = size / 2;

	if (size % 2 != 0)
		n++;

	for (i = n; i < size; i++)
		_putchar(str[i]);

	_putchar('\n');
}

