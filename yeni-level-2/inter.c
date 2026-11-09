
#include <unistd.h>

int main(int ac, char **av)
{
    int flag = 0;
    int s = 0;
    int i = 0;
    int j = 0;

    if (ac == 3)
    {
        while (av[1][i])
        {
            j = 0;
            flag = 0;
            while (av[2][j])
            {
                if (av[1][i] == av[2][j])
                {
                    flag = 1;
                    break;
                }
                j++;
            }
            if (flag == 1)
            {
                s = 0;
                while (s < i)
                {
                    if (av[1][s] == av[1][i])
                    {
                        flag = 0;
                        break;
                    }
                    s++;
                }
                if (flag == 1)
                    write(1, &av[1][i], 1);
            }
            i++;
        }
    }
    write(1, "\n", 1);
    return (0);
}

