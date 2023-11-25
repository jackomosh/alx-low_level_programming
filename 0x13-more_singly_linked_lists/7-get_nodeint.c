#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node of a list
 * @head: pointer of first node
 * @index: place of nth node
 * Return: node
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int a;

	for (a = 0; a < index; a++)
	{
		while (head == NULL)
			return (NULL);
		head = head->next;
	}
	return (head);
}
