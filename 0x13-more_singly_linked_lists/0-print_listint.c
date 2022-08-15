#include "lists.h"

/**
 * print_listint - prints all the elements of a linked list
 * @h: linked list of type listint_t to print
 * @count: counts the number of elements
 * Return: number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t count = 0;

/**
 * Not creating another ptr is because,
 * we are not dealing with the head of the node,
 * but the transversing pointer in main.
 */
	while (h != NULL)
	{
		printf("%d\n", h->n);
		count++;
		h = h->next;
	}

	return (count);
}
