#include "sort.h"
/**
 * insertion_sort_list - algorithm to sort a dpubly linked list
 * @list: doubly linked
 *
 * Return: Nothing
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *head, *temp;

	if (list == NULL || *list == NULL || (*list)->next == NULL)
		return;

	head = *list;
	while (head != NULL)
	{
		while (head->next != NULL && (head->n > head->next->n))
		{
			/* save address of the node with lesser integer data */
			temp = head->next;

			/* move one step ahead for loop control */
			head->next = temp->next;

			/* switch node */
			if (head->next)
				head->next->prev = temp->prev;

			temp->prev = head->prev;

			if (temp->prev)
				temp->prev->next = temp;

			/* re-link the list */
			head->prev = temp;
			temp->next = head;

			/* check and set position of list head */
			if (temp->prev)
				head = temp->prev;
			else
				*list = temp;

			print_list(*list);
		}
		head = head->next;
	}
}
