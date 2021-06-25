#include "holberton.h"
/**
* _isalpha- Checks if character is an Alphabet.
* @c: Character to check.
*
* Return: 1 if character is alphabet, 0 otherwise.
*/

int _isalpha(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else if (c >= 'A' && c <= 'Z')
		return (1);

	return (0);
}

