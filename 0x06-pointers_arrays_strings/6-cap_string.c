#include "holberton.h"

int is_seperator(char s);

/**
* cap_string- Returns the string with allf= first words capitalized.
* @str: Pointer to an array of characters.
* Return: Pointer to char.
*/
char *cap_string(char *str)
{
	int i;
	int seperator = 0;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (is_seperator(str[i]))
		{
			seperator = 1;
			continue;
		}


		else if (str[i] >= 'a' && str[i] <= 'z' && seperator)
		{
			seperator = 0;
			str[i] -= 32;
		}
		else
			seperator = 0;
	}

	return (str);
}

/**
 * is_seperator - Checks if a character is a word seperator.
 * @s: Type -> char. Char to be checked.
 *
 * Return: 0 (Not sperator). 1 (Is sperator)
 */
int is_seperator(char s)
{
	if (s == ' ' ||	s == '\t' || s == '\n' ||
			s == ',' || s == ';' || s == '.' ||
		s == '!' || s == '?' || s == '\"' ||
			s == '(' || s == ')' || s == '{' || s == '}')

		return (1);

	return (0);
}
