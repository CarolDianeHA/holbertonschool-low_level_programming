#include "lists.h"
/**
 * listint_len - function that returns the number of elements
 * linked in the listint_t list.
 * @h: list to check
 * Return: the number of elements in the list
 */
size_t listint_len(const listint_t *h)
{
	size_t counter = 0;

	while (h)
	{
		h = h->next;
		counter++;
	}
	return (counter);
}
