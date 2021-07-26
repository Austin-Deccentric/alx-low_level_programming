#include "holberton.h"
/**
* string_toupper- Converts all uppercse characters in @str to lowercase.
* @str: Pointer to n array of characters
* Return: Type: char
*/

char *string_toupper(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] = str[i] - 32;
		}
	}
	return (str);

}

