#include "lists.h"
/**
 * pop_listint - deletes head of node
 * @head: pointer to head of list
 * Return: data of deleted head
 **/
int pop_listint(listint_t **head)
{
	listint_t *tmp;
	int ret;

	if (*head == NULL)
		return (0);

	tmp = *head;
	ret = (*head)->n;
	*head = (*head)->next;

	free(tmp);

	return (ret);
}
