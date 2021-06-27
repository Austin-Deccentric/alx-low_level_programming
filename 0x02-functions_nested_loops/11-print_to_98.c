#include <stdio.h>
/**
* print_to_98- Print all natural numberss from @n to 98.
* @n: The start of the range to print
*/

void print_to_98(int n)
{
	if (n < 98)
	{
	while (n < 98)
	{
		printf("%d, ", n);
		n++;
	}
	}
	else if (n > 98)
	{
		while (n != 98)
		{
			printf("%d, ", n);
			n--;
		}
	}

	printf("98\n");
}

