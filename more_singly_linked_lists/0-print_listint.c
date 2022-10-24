#include <stdio.h>
#include "lists.h"
/**
 * print_list - prints all elements of a list_t list
 * @h: list to print
 * Return: the number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t counter = 0;

	while (h)
	{
		printf("%i\n", h->n);
		h = h->next;
		counter++;
	}
	return (counter);
}
