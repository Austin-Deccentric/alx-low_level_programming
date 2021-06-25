#include "holberton.h"
/**
* print_last_digit- Print the last digit of a number
* @n: The number to perform task on
* Return: The last digit of @n.
*/
int print_last_digit(int n)
{
	int r;

	r = n % 10;
	if (r < 0)
		r *= -1;

	_putchar('0' + r);

	return (r);
}

