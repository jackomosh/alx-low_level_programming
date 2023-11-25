#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at a given position
 * @head: pointer to first node of a list.
 * @idx: index of the list where the new node is added
 * @n: parameter
 * Return: the address of the new node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i;
	listint_t *node2;
	listint_t *tmp;

	tmp = *head;

	if (idx != 0)
	{
		for (i = 0; i < idx - 1 && tmp != NULL; i++)
		{
			tmp = tmp->next;
		}
	}

	if (tmp == NULL && idx != 0)
		return (NULL);

	node2 = malloc(sizeof(listint_t));
	if (node2 == NULL)
		return (NULL);

	node2->n = n;

	if (idx == 0)
	{
		node2->next = *head;
		*head = node2;
	}
	else
	{
		node2->next = tmp->next;
		tmp->next = node2;
	}

	return (node2);
}
