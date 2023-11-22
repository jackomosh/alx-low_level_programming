#include <stdio.h>
#include "lists.h"

/**
 * listint_len - prints the number of elements in a list
 * @h: head of node
 * Return: nodes
 */

size_t listint_len(const listint_t *h)
{
	size_t nodes = 0;

	while (h != NULL)
	{
		nodes++;
		h = h->next;
	}
	return (nodes);
}
