#include <stdio.h>
#include <stdlib.h>

int main(int ac , char **av)
{
    int i = 2;
    if(ac == 2)
    {
        int p = atoi(av[1]);
        if(p == 1)
            printf("1");
        while (p > 1)
        {
            if(p % i == 0)
            {
                printf("%d", i);
                p /= i;
                if(p > 1)
                    printf("*");
            }
            else
                i++;
        }
    }
    printf("\n");
}

int main(int ac , char **av)
{
    int i = 2;
    if(ac == 2)
    {
        int p = atoi(av[1]);
        while(p > 1)
        {
            if(p % i == 0)
            {
                printf("%d", i);
                p /= i;
                if(p > 1)
                    printf("*");
            }
        else
            i++;
        }
    }
    printf("\n");
}

int main(int ac , char **av)
{
    int i = 2;
    if(ac == 2)
    {
        int p = atoi(av[1]);
        while (p > 1)
        {
            if(p % i == 2)
            {
                printf("%d", i);
                p /= i;
                if(p > 1)
                    printf("*"); 
            }
            else
                i++;
        }
    }
}

int main(int ac , char **av)
{
    int i = 2;
    if(ac == 2)
    {
        int p = atoi(av[1]);
        while (p > 1)
        {
            if(p % 10 == 0)
            {
                printf("%d", i);
                p /= i;
                if(p > 1)
                    printf("*");
            }
            i++;
        }
    }
    printf("\n");
}