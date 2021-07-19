#include "holberton.h"
/**
* _strcpy- Copy string pointed to by @src to @dest.
* @dest: The new memeory location of string @src.
* @src: The string to be copied into @dest.
* Return: Apointer to the new memory location
*/

char *_strcpy(char *dest, char *src)
{
	int size = 0, i = 0;

	while (*(src + size) != '\0')
		size++;

	for (; i <= size; i++)
	{
		dest[i] = *(src + i);
	}
	return (dest);
}

