#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 *  print_list - prints all the elements of a list_t list.
 *  @h: singly linked list
 *
 *  Return: the number of node
 */

size_t print_list(const list_t *h)
{
	size_t counter = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("%s\n", h->str);
		h = h->next;
		counter++;
	}
	return (counter);
}
