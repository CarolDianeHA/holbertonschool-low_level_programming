#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
/**
 * _strlen - similar function strlen.
 * @s: variable to strlen
 * Return: lenght of string
 */
int _strlen(const char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}
/**
 * add_node_end - Function that adds a new node at the end of a list_t list.
 * @head: address of node
 * @str: string to add
 * Return: addresss to the new element, or NULL if it failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *node;
	list_t *tmp;

	node = malloc(sizeof(list_t));
	if (node == NULL)
		return ('\0');
	node->len = _strlen(str);
	node->str = strdup(str);
	node->next = NULL;
	if (*head == NULL)
		*head = node;
	else
	{
		tmp = *head;
		while (tmp->next != NULL)
			tmp = tmp->next;
		tmp->next = node;

	}
	return (node);
}
