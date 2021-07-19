#include "holberton.h"
/**
* _strlen- COunts the length of given string
* @s: Pointer to an arra of chars.
* Return: The number of chars in string.
*/

int _strlen(char *s)
{
	char *t;
	int size = 0;

	for (t = s; *t != '\0'; t++)
	{
		size++;
	}
	return (size);

}

