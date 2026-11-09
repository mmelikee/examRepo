#include <unistd.h>

int main(int ac, char **av)
{
    int i;
    int start;
    int first;
    int len;
    int p;

    i = 0;
    p = 0;
    if (ac >= 2)
    {
        while (av[1][i] == ' ' || av[1][i] == '\t') i++;
        first = i;
        while (av[1][i] && av[1][i] != ' ' && av[1][i] != '\t') i++;
        len = i - first;
        while (av[1][i])
        {
            while (av[1][i] == ' ' || av[1][i] == '\t') i++;
            if (!av[1][i])
                break;
            start = i;
            while (av[1][i] && av[1][i] != ' ' && av[1][i] != '\t') i++;
            if (p)
                write(1, " ", 1);
            write(1, av[1] + start, i - start);
            p = 1;
        }
        if (len > 0)
        {
            if (p)
                write(1, " ", 1);
            write(1, av[1] + first, len);
        }
    }
    write(1, "\n", 1);
    return (0);
}