#include "lists.h"
/**
 * print_listint - prints all the element of a listint_t
 * @h: Head
 * Return: returns the number of node
 */
size_t print_listint(const listint_t *h)
{
	int ca = 0;

	if (h == NULL)
		return (0);
	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		ca++;
	}
	return (ca);
}
