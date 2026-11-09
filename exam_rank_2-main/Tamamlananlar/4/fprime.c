#include <stdio.h>
#include <stdlib.h>
int main(int ac, char **av)
{
    int i;
    int p;
    if(ac == 2)
    {
        i=2;
        p = atoi(av[1]);
        if (p == 1)
            printf("1");
        while (p > 1)
        {
            if (p % i == 0)
            {
                printf("%d", i);
                p /= i;
                if (p > 1)
                    printf("*");
            }
            else
                i++;
        }
    }
    printf("\n");
    return (0);
}
