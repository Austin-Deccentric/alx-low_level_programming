#include <stdio.h>
#include "holberton.h"
/**
* print_array- Prints @n number fo elements from @a array.
* @a: Array object. Pointer to int.
* @n: Number of elemets to print from array
*/

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
		if (i != (n - 1))
			printf("%d, ", *(a + i));
		else if (i == (n - 1))
			printf("%d", *(a + i));
	printf("\n");
}

