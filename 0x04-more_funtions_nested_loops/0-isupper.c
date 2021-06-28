#include "holberton.h"
/**
* _isupper- Checks if given charaacter is in Uppercase
* @c: Char to check
* Return: 1 (Success), 0 (Fail)
*/

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);

	return (0);
}

