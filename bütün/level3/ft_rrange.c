#include <stdlib.h>

int     *ft_rrange(int start, int end)
{
    int i;
    int size;
    int step;
    int *res;
    size = abs(start - end) + 1;
    res = malloc(sizeof(int) *size);
    if(!res)
        return(NULL);
    step = (start <= end) ? 1 : -1;
    i = 0;
    while (i < size)
    {
        res[i] = end;
        end -= step;
        i++;
    }
    return res;
}
