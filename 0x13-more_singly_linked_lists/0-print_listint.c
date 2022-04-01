#include "lists.h"
#include <stdio.h> 
/**
 * print_listint - prints all elements of a listint_t list
 * @h: listint_t pointer
 * Return: number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t nod = 0;

	while (h)
	{
		nod++;
		printf("%d\n", h->n);
		h = h->next;
	}
	return (nod);
}
