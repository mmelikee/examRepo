#include <unistd.h>
#include <stdio.h>

int main(int ac, char **av)
{
    int j = 0;
    int i = 0;
    int flag = 0;
    if(ac == 3)
    {
        while (av[1][i])
        {
            i++;
        }
        while (av[2][j])
        {
            av[1][i] = av[2][j];
            i++;
            j++;
        }
        i = 0;
        j = 0;
        while(av[1][i])
        {
            j = 0;
            flag= 0;
            while(j < i)
            {
                if(av[1][i] == av[1][j])
                {
                    flag = 1;
                    break;
                }
                j++;
            }
            if(flag == 0)
                write(1, &av[1][i], 1);
            i++;
        }
    }
}
