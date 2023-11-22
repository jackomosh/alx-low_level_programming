#include "lists.h"

/**
 * list_len - prints all nodes of an element
 * @h: parameter
 * Return: number of nodes
 */
size_t list_len(const list_t *h)
{
	size_t nodes;

	nodes = 0;

	while (h != NULL)
	{
		h = h->next;
		nodes++;
	}
	return (nodes);
}
