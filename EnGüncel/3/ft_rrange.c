#include <stdlib.h>

int     *ft_rrange(int start, int end)
{
    int i;
    int size;
    int *res;
    int steps;
    size = abs(end - start) + 1;
    res = malloc(sizeof(int) * size);
    if(!res)
        return NULL;
    steps = (start <= end) ? 1 : -1;
    i = 0;
    while (i < size)
    {
        res[i] = end;
        end -= steps;
        i++;
    }
    return(res);
}
