#include "lists.h"
/**
 * print_listint - prints all the elements of a listint_t list
 * @h: head of the list
 *
 * Return: the number of nobes
 */
size_t print_listint(const listint_t *h)
{
	size_t num_nobes = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n); /* autofills 0 if no int value given */

		num_nodes += 1;
		h = h->next;
	}

	return (num_nobes);
}
