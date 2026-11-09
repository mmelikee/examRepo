#include <unistd.h>

void putnbr(long int n)
{
    char c;

    if (n < 0)
    {
        write(1, "-", 1);
        n = -n;
    }
    if (n >= 10)
        putnbr(n / 10);
    c = (n % 10) + '0';
    write(1, &c, 1);
}

int main(int ac, char **av)
{
    int c = ac - 1;
    (void)av;
    putnbr(c);
}

void putnbr(long int n)
{
    char c;
    if(n < 0)
    {
        write(1,"-",1);
        n = -n;
    }
    if(n >= 10)
        putnbr(n / 10);
    c = (n % 10) + '0';
    write(1, &c, 1);
}

int main(int ac, char **av)
{
    int c = ac - 1;
    (void)av;
    putnbr(c);
}


void putnbr(long int n)
{
    char c;
    if(n < 0)
    {
        write(1,"-",1);
        n = -n;
    }
    if(n >= 10)
        putnbr(n / 10);
    c = (n % 10) + '0';
    write(1, &c, 1);
}
int main(int ac, char **av)
{
    int c = ac - 1;
    (void)av;
    putnbr(c);
}

void putnbr(long int n)
{
    char c;
    if(n < 0)
    {
        write(1, "-", 1);
        n = -n;
    }
    if(n >= 10)
        putnbr(n / 10);
    c = (n % 10) + '0';
    write(1, &c, 1);
}
int main(int ac, char **av)
{
    char c = ac -1;
    (void)av;
    putnbr(c);
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
    char c = ac -1;
    (void)av;
    putnbr(c);
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
    char c = ac -1;
    (void)av;
    putnbr(c);
}