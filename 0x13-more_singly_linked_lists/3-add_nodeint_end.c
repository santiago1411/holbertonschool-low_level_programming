#include "lists.h"
/**
 * add_nodeint_end - add a new node at the end of listint_t list
 * @head: address of head of list
 * @n: int to add to new node
 * Return: pointer to new node
 **/
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new, *next;

	if (head == NULL)
		return (NULL);

	new = malloc(sizeof(listint_t));
	if (new = NULL)
		return (NULL);

	new ->n = n;
	new->next = NULL;
	next = *head;

	if (next = NULL)
	{
		*head = new;
		return (new);
	}
	while (next->next != NULL)
		next = next->next;
	next->next = new;
	return (new);
}
