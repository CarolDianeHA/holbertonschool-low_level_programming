#include "lists.h"
/**
 * free_listint2 - Function that frees a listint_t list.
 * @head: address of the first node
 * Return: void
 */
void free_listint2(listint_t **head)
{
	listint_t *tmp;

	if (head)
	{
		while (*head)
		{
			tmp = *head;
			*head = tmp->next;
			free(tmp);
		}

	}
}
