#include "lists.h"
/**
 *insert_nodeint_at_index - inserts a new node at a given position.
 * @head: pointer to pointer of first node of listint_t list.
 * @idx: the index of the list where the new node should be added.
 * @n: integer data for the new node.
 *
 * Return: Address of the new node or NULL if it fails.
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new, *nav;
	unsigned int i;

	if (!head)
		return (NULL);
	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);
	new->n = n;
	new->next = NULL;

	if (idx == 0)
	{
		new->next = *head;
		*head = new;
		return (new);
	}

	nav = *head;
	for (i = 0; i < idx - 1; i++)
	if (new == NULL)
	{
		free(new);
		return (NULL);
		nav = nav->next;
	}

	new->next = nav->next;
	nav->next = new;
	return (new);
}
