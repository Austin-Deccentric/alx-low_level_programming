#include "holberton.h"
#include <stdio.h>
#include <math.h>
/**
* max_primefactor- Prints the largest prime factor of @n.
* @n: Number of type long.
* Return: Type_ long. The largest prime factor of n.
*/

long max_primefactor(long n)
{
	long maxprimef, i, result;

	while (n % 2 == 0)
	{
		maxprimef = 2;
		n /= 2;
	}

	/* n should be odd after the above */

	result = sqrtl((long double) n);
	for (i = 3; i <= result; i += 2)
	{
		while (n % i == 0)
		{
			maxprimef = i;
			n /= i;
		}

		if (n == 1)
			break;
	}

	if (n > 2)
		maxprimef = n;

	return (maxprimef);
}
/**
 * main- Entry point of Program.
 * Return: ) (success).
 */
int main(void)
{
	long n, i;

	n = 612852475143;

	i = max_primefactor(n);
	printf("%ld\n", i);

	return (0);
}

