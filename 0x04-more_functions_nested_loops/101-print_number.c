#include "holberton.h"
/**
 * print_two- For printing two digits to stdout.
 * @n: Number of two digits to print.
 */


void print_two(int n)
{
	_putchar('0' + n / 10);
	_putchar('0' + n % 10);
}

/**
 * print_three- For printing an integer with 3 digits.
 * @n: The number to print.
 */
void print_three(int n)
{
	int remaining;

	_putchar('0' + n / 100);
	remaining = n % 100;
	print_two(remaining);
}

/**
* print_number- Prints any number @n
* @n: Number to be printed.
*/
void print_number(int n)
{
	if (n < 0)
	{
		n *= -1;
		_putchar('-');
	}


	if (n < 10)
	{
		_putchar('0' + n);
	} else if (n < 100)
	{
		print_two(n);
	} else if (n < 1000)
	{
		print_three(n);
	} else if (n < 10000)
	{
		_putchar('0' + n / 1000);
		print_three(n % 1000);
	}
}

