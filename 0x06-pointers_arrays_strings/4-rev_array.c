#include "holberton.h"
/**
* reverse_array- Reverses the elements in an array.
* @a: Pointer to int.Reps the array of int.
* @n: Number of elements in the array.
*/

void reverse_array(int *a, int n)
{
	int middle, i, temp;

	middle = n / 2;
	n--;

	for (i = 0; i < middle; i++)
	{
		temp = a[n - i];
		a[n - i] = a[i];
		a[i] = temp;
	}
}

