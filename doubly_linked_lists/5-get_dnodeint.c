#include "lists.h"
/**
 * get_dnodeint_at_index - Function that returns the
 * nth node of a dlistint_t linked list.
 * @head: pointer to the first node
 * @index: index of the node, starting from 0
 * Return: NULL if the node does not exist
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *node = head;
	unsigned int counter = 0;

	while (node != NULL && counter <= index)
	{
		if (index == counter)
			return (node);

		node = node->next;
		counter++;
	}
	return ('\0');
}
