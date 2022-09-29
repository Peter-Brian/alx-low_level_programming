#include "lists.h"

/**
 * get_dnodeint_at_index - get node of index of the double linked list
 *
 * @head: pointer to first node of DLL
 * @index: index that you want to retire the node
 * Return: head or null
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int count = 0;

	if (!head)
		return (NULL);

	while (head)
	{
		if (count == index)
			return (head);
		head = head->next;
		count++;
	}
	return (NULL);
}
