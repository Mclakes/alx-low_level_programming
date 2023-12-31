#include "main.h"

/**
 * puts_half - prints 2nd half of a string
 * @str: char array string type
 * Description: If odd number of chars, print (length - 1) / 2
 */

void puts_half(char *str)
{
	int num;

	for (num = 0; str[num] != '\0'; num++)
		;

	num++;

	for (num /= 2; str[num] != '\0'; num++)
	{
		_putchar(str[num]);
	}
	_putchar('\n');
}
