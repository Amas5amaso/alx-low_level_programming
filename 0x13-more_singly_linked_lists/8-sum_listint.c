#include "lists.h"

/**
 * sum_listint - function that returns the sum of all the data (n)
 * @head: pointer to the list
 *
 * Return: sum
 */

int sum_listint(listint_t *head)
{
	int sum = 0;

	if (head == NULL)
		return (0);
	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
