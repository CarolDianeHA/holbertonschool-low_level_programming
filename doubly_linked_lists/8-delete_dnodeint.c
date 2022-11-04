#include "lists.h"
/**
 * delete_dnodeint_at_index - Function that deletes the
 * node at index index of a dlistint_t linked list.
 * @head: address of the first node (double pointer)
 * @index: index of the node that should be deleted.
 * Index starts at 0
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *tmp;
	unsigned int counter = 0;

	if (*head == NULL)
		return (-1);
	tmp = *head;
	for (counter = 0; tmp != NULL && counter < index; counter++)
		tmp = tmp->next;
	if (tmp == NULL)
		return (-1);
	if (counter == index)
	{
		if ((*head)->next == NULL)
		{
			*head = NULL;
			free(tmp);
			return (1);
		}
		if (tmp == (*head))
		{
			(*head) = (*head)->next;
			(*head)->prev = NULL;
			free(tmp);
			return (1);
		}
		if (tmp->next == NULL)
		{
			tmp->prev->next = NULL;
			free(tmp);
			return (1);
		}
		tmp->next->prev = tmp->prev;
		tmp->prev->next = tmp->next;
		free(tmp);
		return (1);
	}
	return (-1);
}
