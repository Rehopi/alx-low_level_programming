#include "lists.h"
#include <stdlib.h>

/**
 * free_list - frees a list_t list
 * @head: the beginning of the list to free
 * Return: Nothing
 */

void free_list(list_t *head)
{
	list_t *next;

	if (head == NULL)
		return;
	next = head->next;
	do {
		free(head->str);
		free(head);
		head = next;
		next = (head) ? head->next : NULL;
	} while (head != NULL);
}
