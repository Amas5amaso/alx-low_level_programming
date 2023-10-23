#include "lists.h"
#include <stdio.h>

/**
 * print_listint - function that prints all the elements
 * of a listint_t list
 * @h: head of the list
 *
 * Return: the number of nodes
 */

size_t print_listint(const listint_t *h)
{
	const listint_t *cursor = h;
	size_t count = 0;

	while (cursor != NULL)
	{
		printf("%d\n", cursor->n);
		count++;
		cursor = cursor->next;
	}
	return (count);
}
