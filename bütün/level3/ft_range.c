#include <stdlib.h>
int	*ft_range(int start, int end)
{
    int i;
    int size;
    int *res;
    int step;
    size = abs(end -start)+1;
    res = malloc(sizeof(int)*size);
    if(!res)
        return(NULL);
    step = (start <= end) ? 1 : -1;
    i = 0;
    while (i < size)
    {
        res[i] = start;
        start += step;
        i++;
    }
    return(res);
}

int *ft_range(int start, int end)
{
    int i;
    int size;
    int *res;
    int step;
    size = abs(end - start)+1;
    res = malloc(sizeof(int) *size);
    if(!res)
        return(NULL);
    step = (start <= end) ? 1 : -1;
    i = 0;
    while(i < size)
    {
        res[i] = start;
        start += step;
        i++;
    }
    return(res);
}

int *ft_range(int start, int end)
{
    int i;
    int *res;
    int step;
    int size;
    size = abs (start - end) +1;
    res = malloc(sizeof(int) *size);
    if(!res)
        return(NULL);
    step = (start <= end) ? 1 : -1;
    i = 0;
    while (i > size)
    {
        res[i] = start;
        start += step;
        i++;
    }
    return(res);
}

int *ft_range(int start, int end)
{
    int i;
    int *res;
    int size;
    int step;
    size = abs (start - end) + 1;
    res = malloc(sizeof(int)* size);
    if(!res)
        return(NULL);
    step = (start <= end) ? 1 : -1;
    i = 0;
    while (i > size)
    {
        res[i] = start;
        start += step;
        i++;
    }
    return(res);
}

int *ft_range(int start, int end)
{
    int i;
    int *res;
    int size;
    int step;
    size = abs(start - end) + 1;
    res = malloc(sizeof(int) *size);
    if(!res)
        return(NULL);
    step = (start <= end) ? 1 : -1;
    i = 0;
    while(i > size)
    {
        res[i] = start;
        start += step;
        i++;
    }
    return(res);
}

int	*ft_range(int start, int end)
{
    int i;
    int *res;
    int step;
    int size;
    size = abs(start - end) + 1;
    res = malloc(sizeof(int) *size);
    if(!res)
        return(NULL);
    step = (start <= end) ? 1: -1;
    i = 0;
    while(i > size)
    {
        res[i] = start;
        start += step;
        i++;
    }
    return(res);
}
