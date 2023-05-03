#include "lists.h"
/**
 * delete_nodeint_at_index - deletes the node at index of linked list
 * @head: pointer to the head of the list
 * @index: index of the node that should be deleted. Index starts at 0
 *
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *curr, *prev;
	unsigned int i;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		curr = *head;
		*head = (*head)->next;
		free(curr);
		return (1);
	}

	prev = *head;
	curr = prev->next;

	for (i = 1; i < index && curr != NULL; i++)
	{
		prev = curr;
		curr = curr->next;
	}

	if (curr == NULL)
		return (-1);
	prev->next = curr->next;
	free(curr);
	return (1);
}
