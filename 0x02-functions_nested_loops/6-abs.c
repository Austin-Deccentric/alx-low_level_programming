#include "holberton.h"
/**
* _abs - Computes the absolute value of a number
* @n: An int to compute absolute value.
*
* Return: The absolute values of @n.
*/

int _abs(int n)
{
	if (n < 0)
	{
		return (n * -1);
	}

	return (n);
}

