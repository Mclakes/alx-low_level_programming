#include "main.h"
/**
 * puts2 - prints a str,start with char, followed by a new line,
 * @str: pointer to the string to print
 * Return: void
*/

void puts2(char *str)
{
	int num = 0;

	while (str[num] != '\0')
	{
		if (num % 2 == 0)
		{
			_putchar(str[num]);
		}

		num++;
	}
	_putchar('\n');
}
