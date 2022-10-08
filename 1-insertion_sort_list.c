#include "sort.h"

/**
 * swap_nodes - swaps two nodes in a listint_t doubly-linked list
 * @h: pointer to the head of the doubly-linked list
 * @n1: pointer to the first node to swap
 * @n2: second node to swap
 */
void swap_nodes(listint_t **h, listint_t **n1, listint_t *n2)
{
	(*n1)->next = n2->next;
	if (n2->next != NULL)
		n2->next->prev = *n1;
	n2->prev = (*n1)->prev;
	n2->next = *n1;
	if ((*n1)->prev != NULL)
		(*n1)->prev->next = n2;
	else
		*h = n2;
	(*n1)->prev = n2;
	*n1 = n2->prev;
}

/**
* insertion_sort_list - sorts a doubly linked list of integers in ascending
* order using the Insertion sort algorithm
* @list: pointer to the head of a doubly-linked list of integers
* Return: Nothing (void)
*/

void insertion_sort_list(listint_t **list)
{
	listint_t *iteration, *insert, *temp;

	if (list == NULL || *list == NULL || (*list)->next == NULL)
		return;

	for (iteration = (*list)->next; iteration != NULL; iteration = temp)
	{
		temp = iteration->next;
		insert = iteration->prev;
		while (insert != NULL && iteration->n < insert->n)
		{
			swap_nodes(list, &insert, iteration);
			print_list((const listint_t *)*list);
		}
	}
}
