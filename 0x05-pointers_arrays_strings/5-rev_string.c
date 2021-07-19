#include "holberton.h"
/**
* rev_string- Reveres the given string in place.
* @s: Pointer to char. The string to be reversed.
*/

void rev_string(char *s)
{
	int size = 0;
	int i;
	int middle;
	char temp;

	while (*(s + size) != '\0')
		size++;

	middle = size / 2;
	size--;
	for (i = 0; i < middle; i++)
	{
		temp = s[i];
		s[i] = s[size - i];
		s[size - i] = temp;
	}

}

