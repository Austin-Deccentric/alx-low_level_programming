#include "holberton.h"
/**
* leet- Encodes @str into 1337.
* @str: String. Type -> *char
* Return: Encoded string -> char.
*/

char *leet(char *str)
{
	int i, j;
	char characters[] = {'a', 'e', 'o', 't', 'l'};
	char codes[] = {'4', '3', '0', '7', '1'};

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; j < 5; j++)
		{
			if (str[i] == characters[j] || str[i] == characters[j] - 32)
			{
				str[i] = codes[j];
				break;
			}
		}
	}
	return (str);
}

