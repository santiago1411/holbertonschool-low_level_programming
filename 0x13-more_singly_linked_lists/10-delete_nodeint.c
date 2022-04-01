#include "lists.h"
/**
 * delete_nodeint_at_index - delete a node at a given index
 * @head: pointer to head of list
 * @index: index of node
 * Return: 1 if succeeds, -1 if failed
 **/
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *prior, *next;
	unsigned int i;

	if (head == NULL || *head == NULL)
		return (-1);

	next = *head;

	if (index == 0)
	{
		prior = next->next;
		free(next);
		*head = prior;
		return (1);
	}

	for (i = 0; i < index; i++)
	{
		if (next == NULL)
			return (-1);
		prior = next;
		next = next->next;
	}
	prior->next = next->next;
	free(next);
	if (index == 0)
		head = &prior;
	return (1);
}
