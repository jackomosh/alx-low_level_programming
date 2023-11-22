#include "lists.h"

/**
 * free_list - free a lists of an element
 * @head: parameter
 * Return: void
 */
void free_list(list_t *head)
{
	list_t *tmp;

	while (head != NULL)
	{
		tmp = head;
		head = head->next;
		free(tmp);
	}
}
