#include "lists.h"
/**
 * add_dnodeint_end - Function that adds a new node
 * at the end of a dlistint_t list.
 * @head: double pointer to the first node
 * @n: value
 * Return: address of the new element, or NULL if it failed
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *node;
	dlistint_t *tmp;

	node = malloc(sizeof(dlistint_t));
	if (node == NULL)
		return ('\0');
	node->n = n;
	node->next = NULL;
	if (*head == NULL)
	{
		node->prev = NULL;
		*head = node;
	}
	else
	{
		tmp = *head;
		while (tmp->next != NULL)
			tmp = tmp->next;
		tmp->next = node;
		node->prev = tmp;
	}
	return (node);
}
