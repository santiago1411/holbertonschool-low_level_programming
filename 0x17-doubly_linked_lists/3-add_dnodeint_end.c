#include lists.h
/**
 * add_dnodeint_end - add node to end of doubly linked list
 * @head: double pointer to head of list
 * @n: value to assign to new node
 * Return: pointer to new element, NULL if failed
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new;

	if (head == NULL)
		return (NULL);

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = NULL;

	if (*head == NULL)
	{
		new->prev = NULL;
		*head = new;
		return (*head);
	}
	while ((*head)->next != NULL)
	{
		*head = (*head)->next;
	}
	new->prev = *head;
	(*head)->next = new;

	return (new);
}
