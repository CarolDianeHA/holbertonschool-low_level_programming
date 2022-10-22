#ifndef _LISTS_H_
#define _LISTS_H_
#include <stddef.h>
/**
 * struct list_s - singly linked list
 * @str: string
 * @len: length of the string
 * @next: point to the next node
 */
typedef struct list_s
{
char *str;
unsigned int len;
struct list_s *next;
} list_t;

size_t print_list(const list_t *h);
size_t list_len(const list_t *h);
int _strlen(const char *s);
list_t *add_node(list_t **head, const char *str);
list_t *add_node_end(list_t **head, const char *str);
void free_list(list_t *head);
void __attribute__ ((constructor)) premain();
#endif
