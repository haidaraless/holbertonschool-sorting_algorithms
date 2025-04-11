#include <stdio.h>
#include "sort.h"

/**
* insertion_sort_list - sorts a doubly linked list of integers
* in ascending order using the Insertion Sort algorithm.
* @list: a pointer to the head of the doubly linked list.
*/
void insertion_sort_list(listint_t **list)
{
	listint_t *current, *temp;

	if (list == NULL || *list == NULL || (*list)->next == NULL)
		return;

	current = (*list)->next;
	while (current != NULL)
	{
		while (current->prev != NULL && current->n < current->prev->n)
		{
			temp = current->prev;
			if (temp->prev)
				temp->prev->next = current;
			current->prev = temp->prev;
			temp->next = current->next;

			if (current->next)
				current->next->prev = temp;
			current->next = temp;
			temp->prev = current;

			if (current->prev == NULL)
				*list = current;

			print_list(*list);
		}
		current = current->next;
	}
}
