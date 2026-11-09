#include <unistd.h>
void	print_hex(unsigned int n)
{
    char *hex = "0123456789abcdef";
    if(n >= 16)
        print_hex(n / 16);
    write(1, &hex[n % 16], 1);
}

int main(int ac, char const **av)
{
    unsigned int n = 0;
    char *hex = "0123456789abcdef";
    if(ac == 2)
    {
        while (*av[1])
        {
            n = n * 10 +(av[1] - '0');
            av[1]++;
        }
        print_hex(n);
    }
    write(1, "\n", 1);
}

void	print_hex(unsigned int n)
{
    char *hex = "0123456789abcdef";
    if(n > 16)
    {
        print_hex(n / 16);
    write(1, &hex[n % 16], 1);    
    }
}

int main(int ac, char const **av)
{
    unsigned int n  = 0;
    char *hex = "0123456789abcdef";
    if(ac == 2)
    {
        while(*av[1])
        {
            n = n * 10 + (av[1] - '0');
            av[1]++;
        }
        print_hex(n);
    }
        write(1, "\n", 1);
}