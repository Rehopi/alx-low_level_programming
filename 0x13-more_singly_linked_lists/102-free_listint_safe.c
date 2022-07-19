#include "lists.h"

/**
 * free_listint_safe - frees a listint_t linked list
 * @h: listint_t double pointer input
 * Return: the size of the list that was free’d
 */
size_t free_listint_safe(listint_t **h)
{
	listint_t *current = *h, *aux;
	size_t nodes = 0;

	if (!current)
		return (0);

	while (current)
	{
		aux = current;
		current = current->next;
		nodes++;

		if (current >= aux)
			break;
		free(aux);
	}
	*h = NULL;
	return (nodes);
}
