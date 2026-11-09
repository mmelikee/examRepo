#include <stdio.h>
#include <stdlib.h>
int	main(int ac, char **av)
{
    int tmp;
    if(ac == 3)
    {
        int a = atoi(av[1]);
        int b = atoi(av[2]);
        while (b)
        {
            tmp = b;
            b = a % b;
            a = tmp;
        }
        printf("%d", a);
    }
    printf("\n");
}

#include <stdio.h>
#include <stdlib.h>
int	main(int ac, char **av)
{
    int tmp;
    if(ac == 3)
    {
        int b = atoi(av[1]);
        int a = atoi(av[2]);
        while (b)
        {
            tmp = b;
            b = a % b;
            a = tmp;
        }
        printf("%d", a);
    }
    printf("\n");
}