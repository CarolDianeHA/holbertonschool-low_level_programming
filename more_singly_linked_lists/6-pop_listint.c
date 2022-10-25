#include "lists.h"
/**
 * pop_listint - Function that delets the head node of a listint_t linked list.
 * @head: address of the first node
 * Return: the head node's data (n)
 */
int pop_listint(listint_t **head)
{
	listint_t *tmp;
	int sec;

	if (*head == NULL)
		return (0);

	tmp = *head;
	sec = tmp->n;
	*head = tmp->next;

	free(tmp);
	return (sec);
}
