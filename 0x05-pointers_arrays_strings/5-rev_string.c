#include "main.h"

/**
  * rev_string - reverses a string.
  * @s: piont to the string
  * Returns: void
  */
void rev_string(char *s)
{
	int i = 0, j = 0;
	char strg[500];

	while (*(s + i))
	{
		*(strg + i) = *(s + i);
		i++;
	}
	i = i - 1;
	while (i >= 0)
	{
		*(s + i) = *(strg + j);
		j++;
		i--;
	}
}
