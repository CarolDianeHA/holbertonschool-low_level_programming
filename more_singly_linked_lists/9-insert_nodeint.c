#include "lists.h"
/**
 * insert_nodeint_at_index - insert a new node in a given position
 * @head: address of the first node (double pointer)
 * @idx: index of the list where the new node should be added.
 * @n: data to enter in the new node
 * Return: address of new node, NULL if failed
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *tmp = *head;
	listint_t *new;
	unsigned int counter = 0;

	if (tmp == NULL && idx != 0)
		return ('\0');

	while (tmp && counter < idx - 1)
	{
		tmp = tmp->next;
		counter++;
	}
	new = malloc(sizeof(listint_t));
	if (new != NULL)
	{
		new->n = n;
		if (idx == 0)
		{
			new->next = *head;
			*head = new;
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
