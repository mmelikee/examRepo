#include <unistd.h>

int main(int ac, char **av)
{
    int i;
    int j;

    if (ac == 2)
    {
        i = 0;
        while (av[1][i] == ' ' || av[1][i] == '\t')
            i++;
        j = i;
        while (av[1][j] && av[1][j] != ' ' && av[1][j] != '\t')
            j++;
        while (av[1][j])
        {
            while (av[1][j] == ' ' || av[1][j] == '\t')
                j++;
            while (av[1][j] && av[1][j] != ' ' && av[1][j] != '\t')
            {
                write(1, &av[1][j], 1);
                j++;
            }
            if (av[1][j])
                write(1, " ", 1);
        }
        if (j > i)
        {
            write(1, " ", 1);
            write(1, av[1] + i, j - i);
        }
    }
    write(1, "\n", 1);
    return (0);
}