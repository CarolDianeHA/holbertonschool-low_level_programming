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
	dlistint_t *tmp = *h, *tmpcount = *h, *tmp2;
	dlistint_t *new;
	unsigned int counter = 0;

	if (*h == NULL)
		return ('\0');
			while (tmpcount != NULL)
				tmpcount = tmpcount->next, counter++;
	if (idx > counter)
		return ('\0');
	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return ('\0');
	new->n = n;
	if (idx == 0)
	{
		new->prev = NULL, new->next = *h;
		if (*h)
			(*h)->prev = new;
		*h = new;
		return (new);
	}
	for (counter = 0; counter < idx; counter++)
		tmp2 = tmp, tmp = tmp->next;
	new->next = tmp;
	new->prev = tmp2;
	tmp2->next = new;
	if (tmp)
		tmp->prev = new;
	return (new);
}
