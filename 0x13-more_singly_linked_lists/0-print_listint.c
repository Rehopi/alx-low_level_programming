#include "lists.h"
/**
 * print_listint - prints all the elements of a listint_t list
 * @h: head of the list
 *
 * Return: the number of nobes
 */
size_t print_listint(const listint_t *h)
{
	listint_t *elem;
	size_t num = 0;

	if (h == NULL)
		return (num);
	/*elem = malloc(sizeof(listint_t));
	if (elem == NULL)
        return (-1);*/
        elem = (listint_t *) h;
	while (elem != NULL)
	{
		prinf("%d\n", elem->n);
		num++;
		elem = elem->next;
	}
	/*free(elem);*/
	return (num);
}
