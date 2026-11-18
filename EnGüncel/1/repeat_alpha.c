int main(int argc, char **av)
{
    if(argc == 2)
    {
        int i = 0;
        int len;
        while (av[1][i])
        {
            if (av[1][i] <= 'z' && av[1][i] >= 'a')
                len = av[1][i] - 'a' - 1;
            else if (av[1][i] <= 'Z' && av[1][i] >= 'A')
                len = av[1][i] - 'A' - 1;
            while (len)
            {
                write(1, &av[1][i], 1);
                len--;
            }
            i++;
        }      
    }
    write(1, "\n", 1);
}


