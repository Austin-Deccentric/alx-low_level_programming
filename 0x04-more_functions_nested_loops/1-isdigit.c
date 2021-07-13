#include "holberton.h"
/**
* _isdigit- Checks if a number is with the inclusive range 0 - 9.
* @c: The number to check.
* Return: 1 (Is digit), 0 (Fail).
*/

int _isdigit(int c)
{
	if (c <= '9' && c >= '0')
		return (1);
		
	return (0);

}

