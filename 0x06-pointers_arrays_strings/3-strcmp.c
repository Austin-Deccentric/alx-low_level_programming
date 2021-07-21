#include "holberton.h"
/**
* _strcmp- Compares two strings @s1 and @s2.
* @s1: Pointer to char. String to compare to @s2.
* @s2: Pointer to char. Second string to compare.
* Return: Tyoe -> INT. The difference between the strings.
* 0 if they are same.
* Less than zero if @s2 is greater than @s1;
* Greater than 0 if @s1 is greater than @s2.
*/

int _strcmp(char *s1, char *s2)
{
	while ((*s1 != '\0' && *s2 != '\0') && (*s1 == *s2))
	{
		s1++;
		s2++;
	}

	if (*s1 == *s2)
		return (0);

	return (*s1 - *s2);
}
