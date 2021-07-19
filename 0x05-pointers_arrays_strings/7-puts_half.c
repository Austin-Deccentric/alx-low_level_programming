#include "holberton.h"
/**
* puts_half- Prints half of a string.
* @str: Pointer to char.
*/

void puts_half(char *str)
{
	int size = 0, n = 0;
	
	while (*(str + size) != '\0')
		size++;
	
	if (size % 2 == 0)
		n = size / 2;
	else
		n = (size - 1) / 2;

	for (; n < size; n++)
		_putchar(*(str + n));
	
	_putchar('\n');

}

