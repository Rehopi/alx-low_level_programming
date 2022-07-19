#include "lists.h"

/**
 * print_listint_safe - prints a listint_t linked list
 * @head: const listint_t pointer input
 * Return: the number of nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
	const listint_t *current = head, *aux;
	size_t nodes = 0;

	if (!head)
		return (nodes);

	while (current)
	{
		aux = current;
		current = current->next;
		nodes++;
		printf("[%p] %d\n", (void *)aux, aux->n);

		if (current >= aux)
		{
			printf("-> [%p] %d\n", (void *)current, current->n);
			break;
		}
	}
	return (nodes);
}
