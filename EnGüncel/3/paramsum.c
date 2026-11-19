#include <unistd.h>
void ft_putnbr(int n)
{
    if(n >= 10)
        ft_putnbr(n / 10);
    write(1, &"0123456789"[n%10], 1);
}

int main(int ac, char **av)
{
    int i = ac -1;
    (void)av;
    ft_putnbr(i);
}
