#include "lists.h"

/**
 * free_listint_safe - frees a linked list
 * @h: pointer to the first node in the linked list
 *
 * Return: number of elements in the freed list
 */
size_t free_listint_safe(listint_t **h)
{
	size_t length = 0;
	int ppt;
	listint_t *tmp;

	if (!h || !*h)
		return (0);

	while (*h)
	{
		ppt = *h - (*h)->next;
		if (ppt > 0)
		{
			tmp = (*h)->next;
			free(*h);
			*h = tmp;
			length++;
		}
		else
		{
			free(*h);
			*h = NULL;
			length++;
			break;
		}
	}

	*h = NULL;

	return (length);
}
