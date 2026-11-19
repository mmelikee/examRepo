int	ft_atoi_base(const char *str, int str_base)
{
    int i;
    int sign = 1;
    int res = 0;
    if(str_base < 2 || str_base > 16)
        return(0);
    if(*str == '-')
    {
        sign = -1;
        str++;
    }
    while (*str)
    {
        if(*str >= '0' && *str <= '9')
            i = *str - '0';
        else if(*str >= 'a' && *str <= 'f')
            i = *str -'a' + 10;
        else if(*str >= 'A' && *str <= 'F')
            i= *str - 'A' + 10;
        else
            break;
        if(i >= str_base)
            break;
        res = res * str_base + i;
        str++;
    }
    return(res * sign);
}
