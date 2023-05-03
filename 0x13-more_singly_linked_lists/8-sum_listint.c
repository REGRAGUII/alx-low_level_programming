#include "lists.h"

/**
 * sum_listint - calculates the sum of all the data in a listint_t list
 * @head: first node in the linked list
 * Return: resulting sum
 */
int sum_listint(listint_t *head)
{
	listint_t *nav = head;
	size_t count = 0;

	while (nav)
	{
		count += nav->n;
		nav = nav->next;
	}
	return (count);
}
