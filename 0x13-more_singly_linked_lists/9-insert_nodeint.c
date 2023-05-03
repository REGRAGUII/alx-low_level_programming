#include "lists.h"
/**
 * insert_nodeint_at_index - inserts a new node in a linked list,
 * at a given position
 * @head: pointer to the first node in the list
 * @idx: index where the new node is added
 * @n: data to insert in the new node
 *
 * Return: pointer to the new node, or NULL
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *nav, *new, *before;
	unsigned int i = 0;

	if (!head)
		return (NULL);
	nav = *head;
	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);
	new->n = n;
	while (nav)
	{
		if (i == idx - 1)
		{
			before = nav;
		}
		if (idx == 0)
		{
			new->next = nav;
			*head = new;
			return (new);
		}
		if (i == idx)
		{
			new->next = nav;
			before->next = new;
			return (new);
		}
		if (!nav->next && i + 1 == idx)
		{
			new->next = NULL;
			nav->next = new;
			return (new);
		}
		nav = nav->next;
		i++;
	}

	return (NULL);
}
