#include "hoberton.h"
/**
* main- Entry Point
*
* Return: Always 0 (Success)
*/

int main(void)
{
	char str[] = "Holberton";

	print_string(str);

	return (0);

}

/**
 * print_string - Prints characters to stdout.
 * @str: An array of chars to be printed.
 *
 * Description: This function accepts an array
 * of chars as the only input an prints this to stdout
 * Return: 0 (Success)
 */
int print_string(char str[])
{
	int i = 0;

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
	return (0);
}
