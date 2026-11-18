#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int main(int ac, char *av[])
{
    int i = 0;

    if(ac == 4)
    {
        int a = atoi(av[1]);
        int b = atoi(av[3]);
        if(av[2] == '*')
            printf("%d", a * b);
        if(av[2][0] == '+')
            printf("%d", a + b);
        if(av[2][0] == '-')
            printf("%d", a - b);
        if(av[2][0] == '/')
            printf("%d", a / b);
        if(av[2][0] == '%')
            printf("%d", a % b);
    }
    else
        write(1, "\n", 1);
}
