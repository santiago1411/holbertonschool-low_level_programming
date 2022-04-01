#include "lists.h"
/**
 * sum_listint - sums all the data in a listint_t list
 * @head: pointer to head of list
 * Return: sum of all n values
 **/
int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
