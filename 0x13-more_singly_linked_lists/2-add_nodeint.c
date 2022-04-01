#include "lists.h"
#include <stdio.h>
/**
 * add_nodeint - add a new node at the beginning of listint_t list
 * @head: address of head of list
 * @n: int to add to new node
 * Return: pointer to new node
 **/
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new = malloc(sizeof(listint_t));

	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = *head;
	*head = new;

	return (new);
}
