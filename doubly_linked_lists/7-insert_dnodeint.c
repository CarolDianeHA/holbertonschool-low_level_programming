#include "lists.h"
/**
 * insert_dnodeint_at_index - Function that inserts a
 * new node at a given position.
 * @h: address of the first node (double pointer)
 * @idx: index of the list where the new node should be added.
 * @n: data to enter in the new node
 * Return: address of the new node, or NULL if it failed, if
 * it is not possible to add the new node at index idx, do not
 * add the new node and return NULL
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *tmp = *h;
	dlistint_t *new;
	unsigned int counter = 0;

	if (tmp == NULL && idx != 0)
		return ('\0');

	while (tmp && counter < idx - 1)
	{
		tmp = tmp->next;
		counter++;
	}
	new = malloc(sizeof(dlistint_t));
	if (new != NULL)
	{
		new->n = n;
		if (idx == 0)
		{
			new->next = *h;
			*h = new;
			return (new);
		}
		if (counter + 1 == idx)
		{
			new->next = tmp->next;
			tmp->next = new;
			return (new);
		}
	}
	return ('\0');
}
