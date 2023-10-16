#include "main.h"

/**
 * print_rev - prints reversed str, followed by a new line
 * @s: points to the string
 * Return: void
*/

void print_rev(char *s)
{
	int num = 0;

	while (s[num])
		num++;

	while (num--)
	{
		_putchar(s[num]);
	}
	_putchar('\n');
}
