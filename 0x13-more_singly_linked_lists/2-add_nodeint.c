#include "lists.h"

/**
 * add_nodeint - adds a new node to the beginning of a list
 * @head: linked list of type listint_t
 * @n: element to add to list
 *
 * Return: address of new node, or NULL if function fails
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	if (head == NULL)
		return (NULL);

	new = malloc(sizeof(listint_t));

	if (new == NULL)
		return (NULL);

	new->n = n;

	new->next = *head;

	*head = new;

	return (new);
}
