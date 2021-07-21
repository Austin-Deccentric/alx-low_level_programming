#include "holberton.h"
/**
* _strncat- Copies @n bytes from @src to @dest.
* @dest: String to append @n bytes from @src. A pointer to char.
* @src: String to append to @dest.Could be greater than or less than n bytes.
* Type: A pointer to char.
* @n: Number of bytes to copy from @src to @dest.
* Return: Pointer to char.
*/

char *_strncat(char *dest, char *src, int n)
{
	int i = 0, j;

	while (dest[i] != '\0')
		i++;
	for (j = 0; j < n && src[j] != '\0'; j++)
	{
		dest[i + j] = src[j];
	}
	dest[i + j] = '\0';

	return (dest);
}

