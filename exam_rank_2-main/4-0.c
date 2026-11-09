//----------SORT_LIST----------//
#include "ft_list.h"
t_list  *sort_list(t_list *lst, int (*cmp)(int, int))
{
    t_list *tmp;
    int swap;
    tmp=lst;
    while(tmp && tmp->next)
    {
        if(!cmp(tmp->data, tmp->next->data))
        {
            swap=tmp->data;
            tmp->data=tmp->next->data;
            tmp->next->data = swap;
            tmp = lst;
        }
        else
            tmp = tmp->next;
    }
    return lst;
}
//----------SORT_LIST----------//
#include "ft_list.h"
t_list  *sort_list(t_list *lst, int (*cmp)(int, int))
{
    t_list *tmp;
    int swap;
    tmp=lst;
    while(tmp && tmp->next)
    {
        if(!cmp(tmp->data, tmp->next->data))
        {
            swap = tmp->data;
            tmp->data = tmp->next->data;
            tmp->next->data = swap;
            tmp = lst;
        }
        else
            tmp = tmp->next;
    }
    return lst;
}
//----------SORT_LIST----------//
#include "ft_list.h"
t_list  *sort_list(t_list *lst, int (*cmp)(int, int))
{
    t_list *tmp;
    int swap;
    tmp=lst;
    while(tmp && tmp->next)
    {
        if(!cmp(tmp->data, tmp->next->data))
        {
            swap=tmp->data;
            tmp->data=tmp->next->data;
            tmp->next->data=swap;
            tmp=lst;
        }
        else
            tmp = tmp->next;
    }
    return lst;
}
//----------SORT_LIST----------//
#include "ft_list.h"
t_list  *sort_list(t_list *lst, int (*cmp)(int, int))
{
    t_list *tmp;
    int swap;
    tmp=lst;
    while(tmp && tmp->next)
    {
        if(!cmp(tmp->data, tmp->next->data))
        {
            swap=tmp->data;
            tmp->data = tmp->next->data;
            tmp->next->data=swap;
            tmp=lst;
        }
        else
            tmp = tmp->next;
    }
    return lst;
}
//----------SORT_LIST----------//
#include "ft_list.h"
t_list  *sort_list(t_list *lst, int (*cmp)(int, int))
{
    t_list *tmp;
    int swap;
    tmp=lst;
    while(tmp && tmp->next)
    {
        if(!cmp(tmp->next, tmp->next->data))
        {
            swap=tmp->data;
            tmp->data=tmp->next->data;
            tmp->next->data=swap;
            tmp=lst;
        }
        else
            tmp = tmp->next;
    }
    return lst;
}


//----------REV_WSTR----------//
#include <unistd.h>
int main(int ac, char **av)
{
    int i;
    int s;
    if(ac==2)
    {
        i=0;
        while(av[1][i])
            i++;
        while(i>0)
        {
            s=i-1;
            while(s > 0 && av[1][s-1] != ' ' && av[1][s-1] != '\t')
                s--;
            if(s>0)
                write(1, " ", 1);
            i=s-1;
        }
    }
    write(1, "\n", 1);
    return 0;
}
//----------REV_WSTR----------//
#include <unistd.h>
int main(int ac, char **av)
{
    int i;
    int s;
    if(ac==2)
    {
        i=0;
        while(av[1][i])
            i++;
        while(i>0)
        {
            s=i-1;
            while(s>0 && av[1][s-1] != ' ' && av[1][s-1] != '\t')
                s--;
            if(s>0)
                write(1, " ", 1);
            i=s-1;
        }
    }
    write(1, "\n", 1);
    return 0;
}
//----------REV_WSTR----------//
#include <unistd.h>
int main(int ac, char **av)
{
    int i;
    int s;
    if(ac==2)
    {
        i=0;
        while(av[1][i])
            i++;
        while(i>0)
        {
            s=i-1;
            while(s>0 && av[1][s-1] != ' ' && av[1][s-1] != '\t')
                s--;
            if(s>0)
                write(1, " ", 1);
            i=s-1;
        }
    }
    write(1, "\n", 1);
    return 0;
}
//----------REV_WSTR----------//
#include <unistd.h>
int main(int ac, char **av)
{
    int i;
    int s;
    if(ac==2)
    {
        i=0;
        while(av[1][i])
            i++;
        while(i>0)
        {
            s=i-1;
            while(s>0 && av[1][s-1] != ' ' && av[1][s-1] != '\t')
                s--;
            if(s>0)
                write(1, " ", 1);
            i=s-1;
        }
    }
    write(1, "\n", 1);
    return 0;
}
//----------REV_WSTR----------//
#include <unistd.h>
int main(int ac, char **av)
{
    int i;
    int s;
    if(ac==2)
    {
        i=0;
        while(av[1][i])
            i++;
        while(i>0)
        {
            s=i-1;
            while(s > 0 && av[1][s-1] != ' ' && av[1][s-1] != '\t')
                s--;
            if(s>0)
                write(1, " ", 1);
            i=s-1;
        }
    }
    write(1, "\n", 1);
    return 0;
}


//----------FT_LIST_REMOVE_IF----------//
#ifndef LIST_REMOVE_H;
#define LIST_REMOVE_H;

typedef struct s_list
{
    struct s_list *next;
    void * data;
}   t_list;

#endif;
void    ft_list_remove_if(t_list **begin_list, void *data_ref,int (*cmp)(void *, void *))
{
    t_list *cur;
    if(!begin_list || !*begin_list)
        return;
    cur= *begin_list;
    if(cmp(cur->data, data_ref)==0)
    {
        *begin_list = cur->next;
        free(cur);
        ft_list_remove_if(begin_list, data_ref, cmp);
    }
    else
        ft_list_remove_if(&cur->next, data_ref, cmp);
}
//----------FT_LIST_REMOVE_IF----------//
#ifndef LIST_REMOVE_H;
#define LIST_REMOVE_H;

typedef struct s_list
{
    struct s_list *next;
    void * data;
}   t_list;

#endif;
void    ft_list_remove_if(t_list **begin_list, void *data_ref,int (*cmp)(void *, void *))
{
    t_list *cur;
    if(!begin_list || !*begin_list)
        return;
    cur=begin_list;
    if(cmp(cur->data, data_ref)==0)
    {
        *begin_list = cur->next;
        free(cur);
        ft_list_remove_if(begin_list, data_ref, cmp);
    }
    else
        ft_list_remove_if(cur->next, data_ref, cmp);
}
//----------FT_LIST_REMOVE_IF----------//
#ifndef LIST_REMOVE_H;
#define LIST_REMOVE_H;

typedef struct s_list
{
    struct s_list *next;
    void * data;
}   t_list;

#endif;
void    ft_list_remove_if(t_list **begin_list, void *data_ref,int (*cmp)(void *, void *))
{
    t_list *cur;
    if(!begin_list || *begin_list)
        return;
    cur=begin_list;
    if(cmp(cur->data, data_ref)==0)
    {
        begin_list = cur->next;
        free(cur);
        ft_list_remove_if(begin_list, data_ref, cmp);
    }
    else
        ft_list_remove_if(cur->next, data_ref, cmp);
}
//----------FT_LIST_REMOVE_IF----------//
#ifndef LIST_REMOVE_H;
#define LIST_REMOVE_H;

typedef struct s_list
{
    struct s_list *next;
    void * data;
}   t_list;

#endif;
void    ft_list_remove_if(t_list **begin_list, void *data_ref,int (*cmp)(void *, void *))
{
    t_list *cur;
    if(!begin_list||!*begin_list)
        return;
    if(cmp(cur->data, data_ref)==0)
    {
        begin_list = cur->next;
        free(cur);
        ft_list_remove_if(begin_list, data_ref, cmp);
    }
    else
        ft_list_remove_if(cur->next, data_ref, cmp);
}
//----------FT_LIST_REMOVE_IF----------//
#ifndef LIST_REMOVE_H;
#define LIST_REMOVE_H;

typedef struct s_list
{
    struct s_list *next;
    void * data;
}   t_list;

#endif;
void    ft_list_remove_if(t_list **begin_list, void *data_ref,int (*cmp)(void *, void *))
{
    t_list *cur;
    if(!begin_list||!*begin_list)
        return;
    if(cmp(cur->data, data_ref)==0)
    {
        begin_list = cur->next;
        free(cur);
        ft_list_remove_if(begin_list, data_ref, cmp);
    }
    else
        ft_list_remove_if(cur->next, data_ref,cmp);
}

//----------FT_ITOA----------//

//----------FT_ITOA----------//

//----------FT_ITOA----------//

//----------FT_ITOA----------//

//----------FT_ITOA----------//



//----------FT_SPLIT----------//

//----------FT_SPLIT----------//

//----------FT_SPLIT----------//

//----------FT_SPLIT----------//

//----------FT_SPLIT----------//

