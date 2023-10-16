#include "main.h"
#include <stdio.h>

/**
 * print_array - print `n` elements of an array of integers
 * @a: int type array pointer
 * @n: int type integer
 * Desc: Num must be separated.
 * Numbers should be displayed in the same order they are stored in array.
 */

void print_array(int *a, int n)
{
	int num;

	num = 0;

	for (n--; n >= 0; n--, num++)
	{
		printf("%d", a[num]);
		if (n > 0)
		{
			printf(", ");
		}
	}
	printf("\n");
}
