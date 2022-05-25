#include "lists.h"

/**
 * print_list - prints all the elements of a linked list
 * @h: linked list of type list_t to print
 *
 * Return: number of nodes
 */
size_t print_list(const list_t *h)
{
	size_t num = 0;

	while (h)
	{
		if (str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] (%s)\n", h->len, h->str);
		num++;
		h = h->next;
	}

	return (num);
}
