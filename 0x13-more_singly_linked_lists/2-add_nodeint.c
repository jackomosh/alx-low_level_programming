#include <stdio.h>
#include "lists.h"

/**
 * add_nodeint - adds a new node at the beginning
 * @head: head of node
 * @n: parameter
 * Return: head of new node
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t node2;

	int count  = 0;

	node2 = malloc(sizeof(listint_s);

	if (node2 == NULL)
		return (NULL);

	for (n = 0; n != '\0'; n++)
	{
	count++;
	node2->len = count;
	node2->next = *head;
	*head = node2;
	}
	return (*head);
}
