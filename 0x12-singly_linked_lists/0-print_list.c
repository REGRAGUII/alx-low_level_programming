#include <stdio.h>
#include "lists.h"

/**
 * print_list - prints all the element of a linked list
 * @h: pointer 
 * Return: the number of nodes printed
 */
size_t print_list(const list_t *h)
{
	size_t count = 0;

	if (!h->str)
		printf("[0] (nil)\n");
	else
		printf("[%u] %s\n", h->len, h->str);
	h = h->next;
	count++;
	return (count);
}
