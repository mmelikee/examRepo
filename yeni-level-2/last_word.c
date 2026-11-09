#include <unistd.h>

int main(int ac, char **av)
{

    int i = 0;
    while (av[1][i])
    {
        i++;
    }
    i--;
    while (av[1][i] == ' ' || av[1][i] == '\t')
    {
        i--;
    }
    while ((av[1][i] <= 'z' &&  av[1][i] >= 'a') || (av[1][i] <= 'Z' &&  av[1][i] >= 'A'))
    {
   
        i--;
    }
    i++;
    while ((av[1][i] <= 'z' &&  av[1][i] >= 'a') || (av[1][i] <= 'Z' &&  av[1][i] >= 'A'))
    {
        write(1, &av[1][i], 1);
        i++;
    }
}
