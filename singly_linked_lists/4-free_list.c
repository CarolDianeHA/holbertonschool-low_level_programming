#include "lists.h"
#include <stdlib.h>
/**
 * free_list - function that freees a list_t list.
 * @head: input header pointer
 * Return: 0
 */
void free_list(list_t *head)
{
	list_t *tmp;

	while (head != NULL)
	{
		tmp = head;
		head = head->next;
		free(tmp->str);
		free(tmp);
	}

}
