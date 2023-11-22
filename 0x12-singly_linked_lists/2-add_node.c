#include "lists.h"

/**
 * add_node - adds a new node in the list
 * @head: parameter
 * @str: parameter
 * Return: returns a new node address
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *node2;
	unsigned int i, count = 0;

	node2 = malloc(sizeof(list_t));
	if (node2 == NULL)
		return (NULL);
	node2->str = strdup(str);
	for (i = 0; str[i] != '\0'; i++)
		count++;
	node2->len = count;
	node2->next = *head;
	*head = node2;

	return (*head);
}
