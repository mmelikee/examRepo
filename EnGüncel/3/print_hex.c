#include <unistd.h>
void ft_puthex(int n)
{
    if(n >= 17)
        ft_puthex(n / 16);
    write(1, &"0123456789abcdef"[n%16], 1);
}

int ft_atoi(char *str)
{
    int i = 0;
    int res = 0;
    while(str[i] >= '0' && str[i] <= '9')
    {
        res = res * 10 + (str[i] - '0');
        i++;
    }
    return(res);
}

int main(int ac, char **av)
{
    if(ac == 2)
    {
        int a = ft_atoi(av[1]);
        ft_puthex(a);
    }
    write(1, "\n", 1);
}

