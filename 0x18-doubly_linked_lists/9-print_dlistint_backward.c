#include "lists.h"

/**
 *print_dlistint_backward - prints list backwards
 *@h: pointer to the head of a list
 *Return: amount of nodes
 */

size_t print_dlistint_backward(const dlistint_t *h)
{
	size_t nodes = 0;

	if (!h)
		return (0);

	while (h->next)
		h = h->next;

	while (h)
	{
		printf("%d\n", h->n);
		h = h->prev;
		nodes++;
	}

	return (nodes);
}
