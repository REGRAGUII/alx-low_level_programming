#include "lists.h"

/**
 * sum_listint - check the code
 * @head: pointer
 * Return: Always 0.
 */
int sum_listint(listint_t *head)
{
	listint_t *nav = head;
	int sum = 0;

	while (nav)
	{
		sum += nav->n;
		nav = nav->next;
	}
	return (sum);
}
