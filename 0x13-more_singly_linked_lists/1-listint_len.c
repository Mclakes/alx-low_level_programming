#include <stdio.h>
#include "lists.h"

/**
 * listint_len - Write a function that returns
 * the number of elements in a linked listint_t list.
 * @h: number of elements
 *
 * Return: number of elements
 */

size_t listint_len(const listint_t *h)
{
	int num = 0;

	while (h)
	{
		num++;
		h = h->next;
	}
return (num);
}
