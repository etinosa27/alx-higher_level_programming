#include "lists.h"

/**
 * is_palindrome - determine if singly linked list is palindrome
 * @head: pointer to head of singly linked list
 * Return: 0 if not, 1 if palindrome
 */
int is_palindrome(listint_t **head)
{
	listint_t *cp = *head;
	int buff[10240], init = 0, end = 0;

	if (!*head || !((*head)->next))
		return (1);

	while (cp)
	{
		buff[end] = cp->n;
		cp = cp->next;
		end++;
	}

	end--;

	while (init <= end / 2)
	{
		if (buff[init] != buff[end - init])
			return (0);
		init++;
	}

	return (1);
}
