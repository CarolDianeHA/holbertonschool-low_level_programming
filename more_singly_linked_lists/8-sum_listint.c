#include <stdio.h>
#include "lists.h"
/**
 * sum_listint - Function that returns the summ of all
 * the data (n) of a listint_t linked list.
 * @head: address of the first node
 * Return: the sum or 0 if the list is empty
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	if (head == NULL)
		return (0);

	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
