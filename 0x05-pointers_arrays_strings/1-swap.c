#include "holberton.h"
/**
* swap_int- swaps value between two variables.
* @a: Pointer to int
* @b: Pointer to int.
*/

void swap_int(int *a, int *b)
{
	if (*a == *b)
		return;
	*a = *a + *b;
	*b = *a - *b;
	*a = *a - *b;

}

