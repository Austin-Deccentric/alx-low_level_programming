#include "holberton.h"
/**
* _strcat- Appends the charaacters in @src to @dest.
* @dest: The string to extend. A pointer to char.
* @src: The string to append to @dest. A pointer to char.
* Return: A pointer to the extended string. Type: Pointer to char.
*/

char *_strcat(char *dest, char *src)
{
	int i = 0, j = 0;

	while (dest[i] != '\0')
		i++;

	while (src[j] != '\0')
	{
		dest[i + j] = src[j];
		j++;
	}

	dest[i + j] = '\0';
	return (dest);
}

