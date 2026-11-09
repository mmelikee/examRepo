#include <stdio.h>
#include <stdlib.h>

int asal_mı(int a)
{
    int i = 2;
    if(a == 1 || a == 0)
        return(0);
    while(i < a)
    {
        if(a % i == 0)
            return(0);
        i++;
    }
    return(1);
}

int main(int ac, char **av)
{
    if(ac == 2)
    {
        int j = 2;
        int i = atoi(av[1]);
        while(i > 1)
        {
            if(asal_mı(j) && i % j == 0)
            {
                while(i % j == 0)
                {
                    printf("%d", j);
                    if(i / j != 1)
                        printf("%c", '*');
                    i = i / j;
                } 
            }
            j++;
        }
    }
    printf("%c", '\n');
}