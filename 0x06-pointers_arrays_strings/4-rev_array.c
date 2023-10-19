#include "main.h"

/**
*reverse_array -  array reverse
*@a: pointer array.
*@n: number of array.
*/

void reverse_array(int *a, int n)
{
	int x, y;

	for (x = 0, y = n - 1; x < y; x++, y--)
	{
		int temp = a[x];

		a[x] = a[y];
		a[y] = temp;
	}
}
