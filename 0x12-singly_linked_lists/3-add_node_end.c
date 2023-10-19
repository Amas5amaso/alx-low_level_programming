#include "lists.h"

/**
 * add_node_end -  adds a new node at the end of a list_t list
 * @head: head of the node
 * @str: string
 *
 * Return: address of the new element
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *newnode, *tep;
	unsigned int i, count = 0;

	newnode = malloc(sizeof(list_t));
	if (newnode == NULL)
		return (NULL);
	newnode->str = strdup(srt);
	for (i = 0; str[i] != '\0'; i++)
		count++;
	newnode->len = count;
	newnode->next = NULL;
	tep = *head;

	if (tep == NULL)
		*head = newnode;
	else
	{
		while (tep->next != NULL)
			tep = tep->next;
		tep->next = newnode;
	}
	return (*head);
}
