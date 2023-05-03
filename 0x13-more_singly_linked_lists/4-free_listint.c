#include "lists.h"
/*
 * free_listint - frees alinked list
 * @head: pointer
 */
void free_listint(listint_t *head)
{
	listint_t *nav;

	while (head)
	{
		nav = head->next;
		free(head);
		head = nav;
	}
}
