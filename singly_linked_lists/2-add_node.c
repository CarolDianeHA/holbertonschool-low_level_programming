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
 * add_node - add a new node a the beginning of a list_t list.
 * @head: address of node
 * @str: string to add
 * Return: address of the new element, or NULL if it fail
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return ('\0');
	new_node->len = _strlen(str);
	new_node->str = strdup(str);
	new_node->next = *head;
	*head = new_node;
	return (new_node);
}
