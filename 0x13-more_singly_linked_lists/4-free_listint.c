#include "lists.h"

/**
 * free_listint - frees a memory in list
 * @head: parameter
 * Return: void
 */
void free_listint(listint_t *head)
{
	listint_t *tmp;

	while (head != NULL)
	{
		tmp = head->next;
		free(head);
		head = tmp;
	}
}
