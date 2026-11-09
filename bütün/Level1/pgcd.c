#include <stdio.h>
#include <stdlib.h>

int main(int ac, char **av)
{
    int i;
    int j;
    int u = 0;
    if(ac == 3)
    {
        i = atoi(av[1]);
        j = atoi(av[2]);
        if (i == 0 || j == 0)
            return 0;
        if(i >= j)
            u = j;
        else
            u = i;
        while (1)
        {
            if(i % u == 0 && j % u == 0)
            {
                printf("%d\n", u);
                return(0);
            }
            else
                u--;
        }
    }
    printf("%c", '\n');
}