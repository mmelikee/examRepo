#include <stdlib.h>

char    *ft_strdup(char *src)
{
    int i = 0;
    char *res;
    res = malloc(i+1);
    if(!res)
        return NULL;
    i = 0;
    while (src[i])
    {
        res[i] = src[i];
        i++;
    }
    return(res);
}