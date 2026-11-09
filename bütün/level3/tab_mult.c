#include <unistd.h>

void putnbr(int n)
{
    char c;

    if (n < 0)
    {
        write(1, "-", 1);
        n = -n;
    }
    if (n >= 10)
        putnbr(n / 10);
    c = n % 10 + '0';
    write(1, &c, 1);
}

int main(int ac, char **av)
{
    int i = 0;
    int j = 1;
    int num = 0;

    if (ac == 2)
    {
        while (av[1][i])
        {
            num = num * 10 + av[1][i] - '0';
            i++;
        }
        while (j <= 9)
        {
            putnbr(j);
            write(1, " x ", 3);
            putnbr(num);
            write(1, " = ", 3);
            putnbr(num * j);
            write(1, "\n", 1);
            j++;
        }
    }
}
void putnbr(int n)
{
    char c;

    if (n < 0)
    {
        write(1, "-", 1);
        n = -n;
    }
    if (n >= 10)
        putnbr(n / 10);
    c = n % 10 + '0';
    write(1, &c, 1);
}

int main(int ac, char **av)
{
    int i = 0;
    int j = 1;
    int num = 0;
    if(ac == 2)
    {
        while(av[1][i])
        {
            num = num * 10 + av[1][i] - '0';
        }
        while(j <= 9)
        {
            putnbr(j);
            write(1, " x ", 3);
            putnbr(num);
            write(1, " = ", 3);
            putnbr(num * j);
            write(1, "\n", 1);
            j++;
        }
    }
}


void putnbr(int n)
{
    char c;
    if(n < 0)
    {
        write(1, "-", 1);
        n = -n;
    }
    if(n >= 10)
        putnbr(n / 10);
    c = n % 10 + '0';
    write(1, &c, 1);
}

int main(int ac, char **av)
{
    int i = 0;
    int j = 1;
    int res = 0;
    if(ac == 2)
    {
        while(av[1][i])
            res = res * 10 + (av[1][i] - '0');
        while (j <= 9)
        {
            putnbr(j);
            write(1, " x ", 3);
            putnbr(res);
            write(1, " = ", 1);
            putnbr(j * res);
            write(1, "\n", 1);
            j++;
        }
    }
    write(1, "\n", 1);
}