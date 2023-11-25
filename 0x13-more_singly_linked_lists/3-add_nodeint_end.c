#include "lists.h"

/**
 * add_nodeint_end - adds a new node at the end of a list
 * @head: parameter
 * @n: parameter
 * Return: new node
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *node2, *tmp;

	node2 = malloc(sizeof(listint_t));
	if (node2 == NULL)
		return (NULL);
	node2->n = n;
	node2->next = NULL;
	
	if (*head == NULL)
		*head = node2;
	else
	{
		tmp = *head;
	while (tmp->next != NULL)
		tmp = tmp->next;
	tmp->next = node2; 
	}
	return (*head);
}
