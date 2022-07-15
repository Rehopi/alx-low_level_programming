#include <string.h>
#include "lists.h"
/**
 * add_node - adds a new node at the beginning of a list_t list
 * @head: a pointer to the head node
 * @str: string to assign to the new node
 * Return: a pointer to the new node
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new;

	new = (list_t *) malloc(sizeof(list_t));
	if (new == NULL || str == NULL)
	{
		free(new);
		return (NULL);
	}
	new->str = malloc(sizeof(*str) * strlen(str));
	if (new->str == NULL)
	{
		free(new->str);
		free(new);
		return (NULL);
	}
	new->str = strdup(str);
	new->next = *head;
	*head = new;

	return (new);
}

