#include "holberton.h"
/**
* puts2- Print the first character and evry other character in string.
* @str: The string to mnaipulate. A pointer to a char.
*/

void puts2(char *str)
{
	int i = 1;

	_putchar(*str);

	while (*(str + i) != '\0')
	{
		if (i % 2 == 0)
			_putchar(*(str + i));
		i++;
	}
	_putchar('\n');

}

