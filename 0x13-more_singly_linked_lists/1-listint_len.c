#include "lists.h"

/**
 * listint_len - function that returns the number of elements
 * in a linked listint_t list
 * @h: head of the elements
 *
 * Return: the number of elements
 */

size_t listint_len(const listint_t *h)
{
	size_t element;

	if (h == NULL)
		return (0);
	for (element = 0; h != NULL; element++)
	{
		h = h->next;
	}
	return (element);
}

