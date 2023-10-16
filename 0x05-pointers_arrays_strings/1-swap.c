#include "main.h"

/**
  *swap_int - this is o swap two integers
  *@a: first variable
  *@b: second variable
  *Return: void
  */
void swap_int(int *a, int *b)
{
	*a += *b;
	*b = *a - *b;
	*a = *a - *b;
}
