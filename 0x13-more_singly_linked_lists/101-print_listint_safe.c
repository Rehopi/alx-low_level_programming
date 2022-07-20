#include "lists.h"
/**
 * print_listint_safe - prints a listint_t linked list
 * @head: const listint_t pointer input
 * Return: the number of nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
	int i;
	int j;
	const listint_t *tmp;
	const listint_t *current;

	temp = h;

	i = 0;
	while (tmp != NULL)
	{
		current = h;
		j = 0;
		while (j < i)
		{
			if (current == tmp)
			{
				printf("-> [%p] %d\n", (void *) tmp, tmp->n);
				return (i);
			}
			current = current->next;
			j++;
		}
		printf("[%p] %d\n", (void *) tmp, tmp->n);
		tmp = tmp->next;
		i++;
	}
	return (i);
}
	
