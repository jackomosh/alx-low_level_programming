#include "lists.h"

/**
 * add_node_end - adds a newnode at the end of a list
 * @head: head of our node
 * @str: string parameter
 * Return: return a new node at the end of list
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *node2, *tmp;
	unsigned int i, count = 0;

	node2 = malloc(sizeof(list_t));
	if (node2 == NULL)
		return (NULL);
	node2->str = strdup(str);
	for (i = 0; str[i] != '\0'; i++)
		count++;
	node2->len = count;
	node2->next = NULL;
	tmp = *head;

	if (tmp == NULL)
		*head = node2;
	else
	{
		while (tmp->next != NULL)
			tmp = tmp->next;
		tmp->next = node2;
	}
	return (*head);
}
