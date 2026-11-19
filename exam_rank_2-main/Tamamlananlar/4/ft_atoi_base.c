#include <stdlib.h>

int	ft_atoi_base(const char *str, int str_base)
{
    int i = 0;
    int sing = 1;
    int res = 0;
    if(str_base < 2 || str_base > 16)
        return(0);
    if(str[i] == '-')
    {
        sing == -1;
        i++;
    }
    while (str[i])
    {
        if(str[i] >= '0' && str[i] <= '9')
           res = str[i] - '0';
        else if(str[i] >= 'a' && str[i] <= 'f')
            res = str[i] -'a' + 10 - '0';
        else if(str[i] >= 'A' && str[i] <= 'F')
            res = str[i] - 'A' + 10 - '0';
        else 
            break;
        if(res >= str_base)
            break;
        res = str_base + res;
        i++;
    }
    return(res * sing);
}