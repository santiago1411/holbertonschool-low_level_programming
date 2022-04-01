#include "lists.h"
/**
 * free_listint2 - free a listint_t list, sets head to NULL
 * @head: address of head of list
 * Return: nothing
 **/
void free_listint2(listint_t **head)
{
	listint_t *tmp;

	if (head == NULL)
		return;
	while (*head)
	{
		tmp = (*head)->next;
		free(*head);
		*head = tmp;
	}
	head = NULL;
}
