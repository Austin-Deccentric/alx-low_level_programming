#include "holberton.h"
/**
* _strncpy- Copy at most n bytes from @src to @dest
* @dest: The destination memory.
* @src: The string to cipy, Type: pointer to char
* @n: Number of bytes to copy from @src to @dest.
* Type -> INT.
* Return: Pointer to char of dest.
*/

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];
	for (; i < n; i++)
		dest[i] = '\0';

	return (dest);
}
