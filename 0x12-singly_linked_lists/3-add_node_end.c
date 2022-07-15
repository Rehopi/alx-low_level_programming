#include "lists.h"
#include <string.h>
#include <stdlib.h>
/**
 * _strlen - returns the length of a string
 * @s: the string whose length to return
 * Return: the length of the string
 */
int _strlen(const char *s)
{
	int i = 0;

	while (s[i] != '\0')
		i++;

	return (i);
}

/**
 * add_node_end -  adds a new node at the end of a list_t list
 * @head: a pointer to the first node
 * @str: string to set to the node
 * Return: a pointer to the new node
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *current = *head, *new_node;

	if (head == NULL)
		return (NULL);
	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);
	new_node->str = malloc(sizeof(char) * strlen(str));
	if (new_node->str == NULL)
	{
		free(new_node->str);
		free(new_node);
		return (NULL);
	}
	new_node->str = strdup(str);
	new_node->len = strlen(str);
	new_node->next = NULL;
	if (*head == NULL)
	{
		*head = new_node;
		return (*head);
	}
	while (current->next != NULL)
		current = current->next;
	current->next = new_node;
	return (*head);
}
