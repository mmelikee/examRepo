#include "ft_list.h"
t_list  *sort_list(t_list *lst, int (*cmp)(int, int))
{
    t_list  *tmp;
    int     swap;
    tmp = lst;
    while (tmp && tmp->next)
    {
        if (!cmp(tmp->data, tmp->next->data))
        {
            swap = tmp->data;
            tmp->data = tmp->next->data;
            tmp->next->data = swap;
            tmp = lst;
        }
        else
            tmp = tmp->next;
    }
    return (lst);
}