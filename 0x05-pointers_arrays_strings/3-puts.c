#include "holberton.h"
/**
* _puts - Prints string literal to stdout.
* @str: The string to print.
*/

void _puts(char *str)
{
	char *t;

	for (t = str; *t != '\0'; t++)
		_putchar(*t);
	_putchar('\n');
}

