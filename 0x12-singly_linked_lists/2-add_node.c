#include "lists.h"

/**
 * add_node - singly list node function
 * That adds a new node at the beginning of a list_t list
 * @head: first node parameter
 * @str: string to add
 * Return: the address of the new element, or NULL if it failed
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new;

	new = malloc(sizeof(list_t));
	if (new == NULL)
	{
		return (NULL);
	}
	(*new).str = strdup(str);
	(*new).len = strlen(str);
	(*new).next = *head;
	*head = new;
	return (new);
}
