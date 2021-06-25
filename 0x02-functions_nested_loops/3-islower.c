#include "holberton.h"
/**
* _islower - Checks if a character is lowercase.
* @c: character to be evaluated.
*
* Return: 1 if lowercase, 0 otherwise
*/

int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);

	return (0);
}
