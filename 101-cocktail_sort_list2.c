#include "sort.h"
#include <stdbool.h>
/**
  *
  */

void node_swap(listint_t *left, listint_t *right)
{
        listint_t *tmp;

        tmp = left->prev;
        if (tmp)
                tmp->next = right;
        right->prev = tmp;

        left->prev = right;
        left->next = right->next;
        right->next = left;
        
        if(left->next != NULL)
                left->next->prev = left;
}

void cocktail_sort_list(listint_t **list)
{
        
        listint_t *tmp;
        bool flag = true;

        if (!list)
                return;

        while (flag == true)
        {
                flag = false;
        
                for (tmp = *list; tmp; tmp = tmp->next)
                {
                        if (tmp->next && (tmp->n > tmp->next->n))
                        {
                                node_swap(tmp, tmp->next);
                                flag = true;
                                print_list(*list);
                        }
                }
/*
                if (flag == false)
                        break;

                for (; tmp; tmp = tmp->prev)
                {
                        if ((tmp->n < tmp->prev->n) && tmp->prev)
                        {
                                node_swap(tmp->prev, tmp);
                                flag = true;
                                print_list(*list);
                        }
                }*/
        }
}
