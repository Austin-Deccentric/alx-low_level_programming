#include "holberton.h"
/**
* print_alphabet_x10- Print the alphabet in lowercase to stdout.
*
* Return: void
* Description: Prints the lowercase alphabets 10 times on stdout.
*/

void print_alphabet_x10(void)
{
	char i;
	int n = 0;

	while (n < 10)
	{
		for (i = 'a'; i <= 'z'; i++)
			_putchar(i);

		_putchar('\n');
		n++;
	}

}
