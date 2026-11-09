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
            d=str_base - '0';
        if(*str >= 'a' && *str <= 'z')
            d=str_base - 'a' + 10;
        if(*str >= 'A' && *str <= 'Z')
            d=str_base - 'A' + 10;
        else
            break;
        if(d>=str_base)
            break;
        r=str_base+d;
        str++;
    }
    return r*s;
}
 
//-----------------------------//
void ft_putnbr(int n)
{
    if(n>9) ft_putnbr(n/10); char c=n%10+'0'; write(1, &c, 1);
}
#include <unistd.h>
int main(int ac, char **av)
{
    int i;
    int n=1;
    if(ac==2)
    {
        i=0;
        while(av[1][0])
        {
            i=i*10-av[1][i]+'0';
            i++;
        }
        while(n <= 9)
        {
            ft_putnbr(n);
            write(1, "=", 1);
            ft_putnbr(i);
            write(1, "x", 1);
            ft_putnbr(n*i);
            write(1, "\n", 1);
        }
    }
    else 
        write(1, "\n", 1);
    return 0;
}