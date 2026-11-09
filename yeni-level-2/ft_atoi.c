int	ft_atoi(const char *str)
{
    int i = 0;
    int res = 0;
    int sing = 1;

    while(str[i] == ' ' || str[i] >= 9 && str[i] <= 13)
        i++;
    if(str[i] == '-' || str[i] == '+')
        if(str[i] == '-')
            sing = -1;
        i++;
    while(str[i])
    {
        if(str[i] >= '0' && str[i] <= '9')
            res = res * 10 + (str[i] - '0');
        i++;
    }
    return(res * sing);
}

#include <stdio.h>

int main()
{
    printf("%d", ft_atoi("-126"));
}