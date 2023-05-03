#include "lists.h"
/**
 * reverse_listint - function that reverses a linked list
 * @head: pointer to the first node in the list
 * Return: pointer to the first node in the new list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *bef = NULL;
	listint_t *aft = NULL;

	while (*head)
	{
		aft = (*head)->aft;
		(*head)->next = bef;
		bef = *head;
		*head = aft;
	}

	*head = bef;

	return (*head);
}
