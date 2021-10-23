#include "sort.h"
/**
  *
  */

void insertion_sort_list(listint_t **list)
{
        listint_t *quieto = *list, *mueve, *tmp;

        while (quieto->next != NULL)
        {
                mueve = quieto;
                while (mueve->n < mueve->prev->n && mueve->prev != NULL)
                {
                        tmp = mueve->prev;
                        mueve->prev = mueve;
                        mueve = tmp;
                        mueve = mueve->prev;
                }
                quieto = quieto->next;
        }
}
