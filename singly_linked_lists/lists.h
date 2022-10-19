#ifndef _LISTS_H_
#define _LISTS_H_
#include <unistd.h>
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

#endif