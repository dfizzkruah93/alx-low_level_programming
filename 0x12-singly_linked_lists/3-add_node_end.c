#include "lists.h"

/**
 * add_node_end - adds node to the end of the list
 *
 * @head: head of the nodee
 * @str: string
 * Return: address of the new element
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *newnodes, *tmp;
	unsigned int i, count = 0;

	newnodes = malloc(sizeof(list_t));
	if (newnodes == NULL)
		return (NULL);

	newnodes->str = strdup(str);
	for (i = 0; str[i] != '\0'; i++)
		count++;
	newnodes->len = count;
	newnodes->next = NULL;
	tmp = *head;

	if (tmp == NULL)
		*head = newnodes;
	else
	{
		while (tmp->next != NULL)
			tmp = tmp->next;
		tmp->next = newnodes;
	}
	return (*head);
}
