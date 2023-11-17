#include "variadic_functions.h"

/**
 * sum_them_all -  function that returns
 * the sum of all its parameters.
 * @n: number of arguments
 *
 * Return: total sum
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int num;
	int sum;
	va_list list;

	va_start(list, n);
	for (num = 0, sum = 0; num < n; num++)
		sum += va_arg(list, int);

	va_end(list);
	return (sum);
}