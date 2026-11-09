#include <unistd.h>
void    ft_putnbr(int n)
{

}
int main(int ac, char**av)
{

}


//-------------------------------------
int	ft_atoi_base(const char *str, int str_base)
{
    int d;
    int s=1;
    int r=0;
    if(str_base < 2 || str_base > 16)
        return 0;
    if(*str == '-')
    {
        s=-1;
        str++;
    }
    while(*str)
    {
        if(*str >= '0' && *str <= '9')
            d= *str -'0';
        if(*str >= 'a' && *str <= 'z')
            d= *str -'a' + 10;
        if(*str >= 'A' && *str <= 'Z')
            d= *str - 'A'+10;
        else
            break;
        if(d>=str_base)
            break;
        r=r*str_base+d;
        str++;
    }
    return r*s;
}