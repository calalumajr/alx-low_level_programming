#include <stdlib.h>
#include "lists.h"

/**
 * add_dnodeint_end - Adds a new node at the end of a dlistint_t list.
 * @head: A pointer to the head of the dlistint_t list.
 * @n: The integer to be stored in the new node.
 *
 * Return: The address of the new element, or NULL if it failed.
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node, *temp;

	if (!head) /* Check if head is NULL */
		return (NULL);
	new_node = malloc(sizeof(dlistint_t)); /* Allocate memory for new node */
	if (!new_node) /* Check if malloc fails */
		return (NULL);
	new_node->n = n; /* Assign value to new node */
	new_node->next = NULL;
	if (!*head) /* If the list is empty */
	{
		new_node->prev = NULL;
		*head = new_node;
		return (new_node);
	}
	temp = *head; /* Traverse the list to the end */
	while (temp->next)
		temp = temp->next;
	temp->next = new_node;
	new_node->prev = temp;
	return (new_node);
}
