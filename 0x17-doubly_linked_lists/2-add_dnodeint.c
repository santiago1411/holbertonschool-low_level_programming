#include "lists.h"

/**
* add_dnodeint - Add node in double linked list
* @head: pointer
* @n: value of node
* Return: new node
*/

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *newnode;

	newnode = malloc(sizeof(dlistint_t));
	if (newnode == NULL)
		return (NULL);

	newnode->prev = NULL;
	newnode->next = *head;
	newnode->n = n;

	if (*head != NULL)
		(*head)->prev = newnode;
	*head = newnode;
	return (newnode);
}
