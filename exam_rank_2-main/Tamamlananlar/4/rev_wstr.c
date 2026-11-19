#include <unistd.h>
int main(int ac, char **av)
{
    int i;
    int s;
    if (ac == 2)
    {
        i = 0;
        while (av[1][i])
            i++;
        while (i > 0)
        {
            s = i - 1;
            while (s > 0 && av[1][s - 1] != ' ' && av[1][s - 1] != '\t')
                s--;
            write(1, av[1] + s, i - s);
            if (s > 0)
                write(1, " ", 1);
            i = s - 1;
        }
    }
    write(1, "\n", 1);
    return (0);
}














int main(int ac, char **av)
{
    int i ;
    int j;
    if(ac == 2)
    {
        while (av[1][i])
        {
            i++;
        }
        while (i > 0)
        {
            j = i - 1;
            while (j > 0 && av[1][j - 1] != ' ' && av[1][j - 1])
            {
                j--;
            }
            write(1, &av[1] + j, i - j);
            if(j > 0)
                write(1, "\n", 1);
            i = j - 1;
        }
    }
    write(1, "\n", 1);
    return 0;
}












































