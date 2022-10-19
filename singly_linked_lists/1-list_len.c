#include "lists.h"
#include <stdio.h>
/**
 * list_len - function that returns the number of elements in the list_t list.
 * @h: list to pring
 * Return: the number of elements in the list
 */
size_t list_len(const list_t *h)
{
	int counter = 0;

	while (h)
	{
		h = h->next;
		counter++;
	}
	return (counter);
}
