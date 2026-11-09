int asal(int a)
{
    int i = 2;
    while(i * i <= a)
    {
        if(a % i == 0)
            return (0);
        i++; 
    }
    return(1);
}

int ft_atoi(char *str)
{
    int sign = 1;
    int i = 0;
    int res = 0;
    if (str[i] == '-')
    {
        sign *= -1;
        i++;
    }
    while (str[i])
    {
        res = res * 10 + str[i] - '0';
        i++;
    }
    return(res * sign);
}

void putnbr(int a)
{
    char c;
    if(a > 9)
        putnbr(a/10);
    c = (a % 10) + '0';
    write(1, &c, 1);
}

int main(int ac, char **av)
{
if(ac == 2)
    {
        int res = 0;
        int i = 2;
        int nbr = ft_atoi(av[1]);
        if (nbr < 0)
        {
            write(1, "0", 1);
            write(1, "\n", 1);
            return 0;
        }
        while (i <= nbr)
        {
            if(is_prime(i))
                res += i;
            i++;
        }
        putnbr(res);
    }
    if (ac != 2)
        write(1, "0", 1);
    write(1, "\n", 1);
}

