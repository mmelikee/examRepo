#include <stdlib.h>
int	*ft_range(int start, int end)
{
    int i;
    int size = 0;
    int *res = 0;
    int steps = 0;
    size = abs(end - start) + 1;
    res = malloc(sizeof(int) * size);
    if(!res)
        return NULL;
    steps = (start <= end) ? 1 : -1;
    i=0;
    while (i < size)
    {
        res[i] = start;
        start += steps;
        i++;
    }
    return(res);
}
