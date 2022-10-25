#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
/**
 * add_nodeint - add a new node a the beginning of a listint_t list.
 * @head: address of node
 * @n: data to add in the node
 * Return: address of the new element, or NULL if it fail
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node;

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return ('\0');
	new_node->n = n;
	new_node->next = *head;
	*head = new_node;
	return (new_node);
}
