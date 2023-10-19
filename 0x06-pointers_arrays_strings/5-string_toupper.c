#include "main.h"

/**
 * string_toupper -  changes the lowercase letter
 * of a string to uppercase.
 * @n: caracteres.
 * Return: n.
 */

char *string_toupper(char *n)
{
	int x;

	for (x = 0; n[x] != '\0'; x++)
	{
		if (n[x] >= 'a' && n[x] <= 'z')
		n[x] = (int)n[x] - 32;
	}
	return (n);
}
