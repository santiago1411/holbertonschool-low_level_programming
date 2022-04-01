#include "lists.h"
/**
 * get_nodeint_at_index - return address of nth node
 * @head: pointer to head of list
 * @index: index of node to return
 * Return: address of node, NULL if failed
 **/
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int node;

	for (node = 0; node < index; node++)
	{
		if (head == NULL)
			return (NULL);

		head = head->next;
	}
	return (head);
}
