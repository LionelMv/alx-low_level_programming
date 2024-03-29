#include "lists.h"

/**
 * print_listint - prints all the elements of a linked list.
 * @h: pointer to the first node of the linked list.
 *
 * Return: number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		count++;
		h = h->next;
	}

	return (count);
}
