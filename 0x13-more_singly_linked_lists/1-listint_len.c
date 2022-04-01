#include "lists.h"
/**
 * listint_len - returns number of nodes in listint_t list
 * @h: listint_t pointer
 * Return: number of nodes
 */
size_t listint_len(const listint_t *h)
{
	size_t nod = 0;

	while (h != NULL)
	{
		nod++;
		h = h->next;
	}
	return (nod);
}
