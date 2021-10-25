#include "sort.h"
/**
  * insertion_sort_list - insertion sort
  * @list: listint_t list
  */

void insertion_sort_list(listint_t **list)
{
	listint_t *quieto, *tmp;

	if (!list)
		return;

	for (quieto = *list; quieto; quieto = quieto->next)
	{
		tmp = quieto;
		while (tmp->prev && (tmp->n < tmp->prev->n))
		{
			tmp->prev->next = tmp->next;
			if (tmp->next)
				tmp->next->prev = tmp->prev;
			tmp->next = tmp->prev;
			tmp->prev = tmp->prev->prev;
			tmp->next->prev = tmp;
			if (tmp->prev)
				tmp->prev->next = tmp;
			else
				*list = tmp;
			print_list(*list);
		}
	}
}
