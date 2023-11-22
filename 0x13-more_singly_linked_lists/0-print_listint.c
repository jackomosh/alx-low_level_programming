#include "lists.h"
#include <stdio.h>

/**
 * print_listint - prints all elements in a list
 * @h: head of node
 * Return: number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t nodes;

	nodes = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		nodes++;
		h = h->next;
	}
	return (nodes);
}
